pipeline {
    agent {
        docker {
            image 'gcc'
        }
    }
    stages {
        stage('Build') {
            steps {
                sh 'git submodule update --init --recursive'
                sh 'make -C hw1'
            }
        }
        stage('Test') {
            steps {
                sh 'make -C hw1 test'
            }
        }
        stage('Clean') {
            steps {
                sh 'make -C hw1 clean'
            }
        }
    }
}
