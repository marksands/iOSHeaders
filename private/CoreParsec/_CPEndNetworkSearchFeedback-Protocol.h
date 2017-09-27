//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDictionary, NSString, _CPStruct;

@protocol _CPEndNetworkSearchFeedback <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) _Bool hasPartialClientIp;
@property(copy, nonatomic) NSString *partialClientIp;
@property(readonly, nonatomic) _Bool hasDuration;
@property(nonatomic) double duration;
@property(readonly, nonatomic) _Bool hasFbq;
@property(copy, nonatomic) NSString *fbq;
@property(readonly, nonatomic) _Bool hasParsecStatus;
@property(copy, nonatomic) NSString *parsecStatus;
@property(readonly, nonatomic) _Bool hasUuid;
@property(copy, nonatomic) NSString *uuid;
@property(readonly, nonatomic) _Bool hasNetworkTimingData;
@property(retain, nonatomic) _CPStruct *networkTimingData;
@property(readonly, nonatomic) _Bool hasStatusCode;
@property(nonatomic) int statusCode;
@property(readonly, nonatomic) _Bool hasResponseSize;
@property(nonatomic) long long responseSize;
@property(readonly, nonatomic) _Bool hasTimestamp;
@property(nonatomic) unsigned long long timestamp;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end

