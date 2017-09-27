//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GEOLogMessageCollectionRequest, NSDate, NSString;

@protocol GEORequestCounterProtocol <NSObject>
@property(nonatomic) _Bool countersEnabled;
- (void)incrementCountsForLogMsgCollection:(GEOLogMessageCollectionRequest *)arg1 appId:(NSString *)arg2 result:(unsigned char)arg3 xmitBytes:(unsigned long long)arg4 recvBytes:(unsigned long long)arg5;
- (void)fetchTrafficProbeCollectionsStartingFrom:(NSDate *)arg1 withCompletion:(void (^)(NSDictionary *, NSError *))arg2;
- (void)recordTrafficProbeCollectionAt:(NSDate *)arg1 tripId:(NSString *)arg2 locationCount:(int)arg3 result:(unsigned char)arg4;
- (void)clearCounters;
- (void)startPowerLogSessionWithName:(NSString *)arg1;
- (void)readRequestsPerAppSince:(NSDate *)arg1 handler:(void (^)(NSDictionary *, NSError *))arg2;
- (void)incrementAtTime:(NSDate *)arg1 app:(NSString *)arg2 requestType:(unsigned char)arg3 result:(unsigned char)arg4 xmitBytes:(unsigned long long)arg5 recvBytes:(unsigned long long)arg6;
- (void)incrementForApp:(NSString *)arg1 requestType:(unsigned char)arg2 result:(unsigned char)arg3 xmitBytes:(unsigned long long)arg4 recvBytes:(unsigned long long)arg5;
@end

