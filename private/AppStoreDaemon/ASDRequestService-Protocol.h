//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class ASDRequest;

@protocol ASDRequestService
- (void)submitRequest:(ASDRequest *)arg1 delegate:(id <ASDRequestDelegate>)arg2 withReplyHandler:(void (^)(id <ASDRequestProxy>, NSError *))arg3;
- (void)cancelAllRequestsWithErrorHandler:(void (^)(NSError *))arg1;
@end

