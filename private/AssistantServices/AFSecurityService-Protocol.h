//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AssistantServices/NSObject-Protocol.h>

@class NSData, NSDictionary;

@protocol AFSecurityService <NSObject>
- (oneway void)processDataMap:(NSDictionary *)arg1 usingProcedure:(long long)arg2 completion:(void (^)(NSDictionary *, NSDictionary *))arg3;
- (oneway void)processData:(NSData *)arg1 usingProcedure:(long long)arg2 completion:(void (^)(NSData *, NSError *))arg3;
@end

