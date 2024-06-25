//
//  ContentView.swift
//  iosApp
//
//  Created by Samar on 18/06/24.
//

import SwiftUI
import injector

struct ComposeView: UIViewControllerRepresentable {
    let provider = SampleKmpProvider()
    func makeUIViewController(context: Context) -> UIViewController {
        DependencyProvider().loadPage()
    }

    func updateUIViewController(_ uiViewController: UIViewController, context: Context) {}
}

struct ContentView: View {
    var body: some View {
        ComposeView()
                .ignoresSafeArea(.keyboard) // Compose has own keyboard handler
    }
}
