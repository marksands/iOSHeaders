//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <LinkPresentation/NSURLSessionDelegate-Protocol.h>

@class NSError, NSHTTPURLResponse, NSURLAuthenticationChallenge, NSURLRequest, NSURLSession, NSURLSessionTask, NSURLSessionTaskMetrics;

@protocol NSURLSessionTaskDelegate <NSURLSessionDelegate>

@optional
- (void)URLSession:(NSURLSession *)arg1 task:(NSURLSessionTask *)arg2 didCompleteWithError:(NSError *)arg3;
- (void)URLSession:(NSURLSession *)arg1 task:(NSURLSessionTask *)arg2 didFinishCollectingMetrics:(NSURLSessionTaskMetrics *)arg3;
- (void)URLSession:(NSURLSession *)arg1 task:(NSURLSessionTask *)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (void)URLSession:(NSURLSession *)arg1 task:(NSURLSessionTask *)arg2 needNewBodyStream:(void (^)(NSInputStream *))arg3;
- (void)URLSession:(NSURLSession *)arg1 task:(NSURLSessionTask *)arg2 didReceiveChallenge:(NSURLAuthenticationChallenge *)arg3 completionHandler:(void (^)(long long, NSURLCredential *))arg4;
- (void)URLSession:(NSURLSession *)arg1 task:(NSURLSessionTask *)arg2 willPerformHTTPRedirection:(NSHTTPURLResponse *)arg3 newRequest:(NSURLRequest *)arg4 completionHandler:(void (^)(NSURLRequest *))arg5;
- (void)URLSession:(NSURLSession *)arg1 taskIsWaitingForConnectivity:(NSURLSessionTask *)arg2;
- (void)URLSession:(NSURLSession *)arg1 task:(NSURLSessionTask *)arg2 willBeginDelayedRequest:(NSURLRequest *)arg3 completionHandler:(void (^)(long long, NSURLRequest *))arg4;
@end

