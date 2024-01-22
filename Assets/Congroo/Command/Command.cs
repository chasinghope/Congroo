using System.Collections.Generic;
using UnityEngine;

namespace Congroo.Core
{
    public interface ICommand
    {
        /// <summary>
        /// ִ��
        /// </summary>
        void Execute();

        /// <summary>
        /// ����ִ��
        /// </summary>
        void UnExecute();
    }



    public class CommandCluster<T> where T : ICommand
    {
        public Stack<T> CommandStack;
        public int ValidOperateCount => CommandStack.Count;

        public CommandCluster()
        {
            CommandStack = new Stack<T>();
        }


        public virtual void AddCommand(T command)
        {
            CommandStack.Push(command);
        }

        public virtual void Undo()
        {
            if (ValidOperateCount == 0) return;

            T command = CommandStack.Pop();
            command.UnExecute();
        }

        public virtual void ClearAllCommand()
        {
            this.CommandStack.Clear();
        }
    }

}