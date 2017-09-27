//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDictionary, NSString, _CPFeedbackPayload;

@protocol _CPParsecFeedback <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) _Bool hasUserGuid;
@property(copy, nonatomic) NSString *userGuid;
@property(readonly, nonatomic) _Bool hasUserAgent;
@property(copy, nonatomic) NSString *userAgent;
@property(readonly, nonatomic) _Bool hasParsecDeveloperID;
@property(copy, nonatomic) NSString *parsecDeveloperID;
@property(readonly, nonatomic) _Bool hasRelTimestamp;
@property(nonatomic) unsigned long long relTimestamp;
@property(readonly, nonatomic) _Bool hasQueryId;
@property(nonatomic) unsigned long long queryId;
@property(readonly, nonatomic) _Bool hasPayload;
@property(retain, nonatomic) _CPFeedbackPayload *payload;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end

