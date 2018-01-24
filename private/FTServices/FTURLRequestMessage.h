//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FTServices/FTIDSMessage.h>

#import "NSCopying.h"

@class NSData, NSDictionary, NSNumber, NSURL;

@interface FTURLRequestMessage : FTIDSMessage <NSCopying>
{
    unsigned long long _requestType;
    NSURL *_requestURL;
    NSDictionary *_requestHeaders;
    NSDictionary *_requestStringParams;
    NSData *_requestBody;
    NSDictionary *_responseHeaders;
    NSData *_responseBody;
    NSNumber *_responseStatusCode;
    NSDictionary *_timingData;
}

@property(copy, nonatomic) NSDictionary *timingData; // @synthesize timingData=_timingData;
@property(copy, nonatomic) NSNumber *responseStatusCode; // @synthesize responseStatusCode=_responseStatusCode;
@property(copy, nonatomic) NSData *responseBody; // @synthesize responseBody=_responseBody;
@property(copy, nonatomic) NSDictionary *responseHeaders; // @synthesize responseHeaders=_responseHeaders;
@property(copy, nonatomic) NSData *requestBody; // @synthesize requestBody=_requestBody;
@property(copy, nonatomic) NSDictionary *requestStringParams; // @synthesize requestStringParams=_requestStringParams;
@property(copy, nonatomic) NSDictionary *requestHeaders; // @synthesize requestHeaders=_requestHeaders;
@property(copy, nonatomic) NSURL *requestURL; // @synthesize requestURL=_requestURL;
@property(nonatomic) unsigned long long requestType; // @synthesize requestType=_requestType;
- (void).cxx_destruct;
- (void)handleResponseStatus:(unsigned long long)arg1;
- (void)handleResponseBody:(id)arg1;
- (void)handleResponseHeaders:(id)arg1;
- (_Bool)isIDSMessage;
- (_Bool)wantsIDSServer;
- (_Bool)wantsIDSSignatures;
- (_Bool)wantsBodySignature;
- (_Bool)allowDualDelivery;
- (_Bool)wantsHTTPGet;
- (_Bool)wantsManagedRetries;
- (id)messageBodyDataOverride;
- (id)additionalMessageHeaders;
- (id)additionalQueryStringParameters;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithURL:(id)arg1 type:(unsigned long long)arg2 headers:(id)arg3 stringParams:(id)arg4 body:(id)arg5;

@end

