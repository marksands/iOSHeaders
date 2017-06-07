//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCS/NSObject-Protocol.h>

@class NSData, NSError, NSHTTPURLResponse, NSURLRequest, NSURLResponse, NSURLSession, NSURLSessionDataTask, NSURLSessionTask;

@protocol C2RequestDelegate <NSObject>
- (void)URLSession:(NSURLSession *)arg1 _willRetryBackgroundDataTask:(NSURLSessionDataTask *)arg2 withError:(NSError *)arg3;
- (void)URLSession:(NSURLSession *)arg1 dataTask:(NSURLSessionDataTask *)arg2 didReceiveData:(NSData *)arg3;
- (void)URLSession:(NSURLSession *)arg1 dataTask:(NSURLSessionDataTask *)arg2 didReceiveResponse:(NSURLResponse *)arg3 completionHandler:(void (^)(long long))arg4;
- (void)URLSession:(NSURLSession *)arg1 task:(NSURLSessionTask *)arg2 _conditionalRequirementsChanged:(_Bool)arg3;
- (void)URLSession:(NSURLSession *)arg1 _taskIsWaitingForConnection:(NSURLSessionTask *)arg2;
- (void)URLSession:(NSURLSession *)arg1 task:(NSURLSessionTask *)arg2 _willSendRequestForEstablishedConnection:(NSURLRequest *)arg3 completionHandler:(void (^)(NSURLRequest *))arg4;
- (void)URLSession:(NSURLSession *)arg1 task:(NSURLSessionTask *)arg2 didCompleteWithError:(NSError *)arg3;
- (void)URLSession:(NSURLSession *)arg1 task:(NSURLSessionTask *)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (void)URLSession:(NSURLSession *)arg1 task:(NSURLSessionTask *)arg2 needNewBodyStream:(void (^)(NSInputStream *))arg3;
- (void)URLSession:(NSURLSession *)arg1 task:(NSURLSessionTask *)arg2 willPerformHTTPRedirection:(NSHTTPURLResponse *)arg3 newRequest:(NSURLRequest *)arg4 completionHandler:(void (^)(NSURLRequest *))arg5;
@end

