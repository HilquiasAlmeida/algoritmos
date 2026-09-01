using System;
using System.Collections.Generic;

public class CustomStack<T> {
    private List<T> items = new List<T>();

    public void Push(T item) {
        items.Add(item);
    }

    public T Pop() {
        if (items.Count == 0) throw new InvalidOperationException("Pilha vazia!");
        T item = items[items.Count - 1];
        items.RemoveAt(items.Count - 1);
        return item;
    }

    public int Count => items.Count;
}

class Program {
    static void Main() {
        CustomStack<int> stack = new CustomStack<int>();
        stack.Push(10);
        stack.Push(20);
        stack.Push(30);

        Console.WriteLine("Elemento removido da Pilha (C#): " + stack.Pop());
    }
}
