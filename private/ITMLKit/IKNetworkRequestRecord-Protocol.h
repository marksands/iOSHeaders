//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDictionary, NSError, NSHTTPURLResponse, NSString, NSURLRequest;

@protocol IKNetworkRequestRecord <NSObject>
@property(readonly, nonatomic) long long initiatorType;
@property(readonly, nonatomic) long long resourceType;
@property(readonly, copy, nonatomic) NSString *identifier;
- (void)didFailWithError:(NSError *)arg1;
- (void)didCompleteLoadingWithResponseBody:(NSData *)arg1;
- (void)didCompleteLoadingFromCache:(long long)arg1 withResponseBody:(NSData *)arg2 mimeType:(NSString *)arg3;
- (void)didReceiveData:(NSData *)arg1;
- (void)didReceiveResponse:(NSHTTPURLResponse *)arg1 timingData:(NSDictionary *)arg2;
- (void)willSendRequest:(NSURLRequest *)arg1;
@end

