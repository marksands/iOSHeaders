//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString, RWIProtocolNetworkHeaders, RWIProtocolNetworkResourceTiming;

@interface RWIProtocolNetworkResponse : RWIProtocolJSONObject
{
}

@property(retain, nonatomic) RWIProtocolNetworkResourceTiming *timing;
@property(copy, nonatomic) NSString *requestHeadersText;
@property(retain, nonatomic) RWIProtocolNetworkHeaders *requestHeaders;
@property(nonatomic) long long source;
@property(copy, nonatomic) NSString *mimeType;
@property(copy, nonatomic) NSString *headersText;
@property(retain, nonatomic) RWIProtocolNetworkHeaders *headers;
@property(copy, nonatomic) NSString *statusText;
@property(nonatomic) double status;
@property(copy, nonatomic) NSString *url;
- (id)initWithUrl:(id)arg1 status:(double)arg2 statusText:(id)arg3 headers:(id)arg4 mimeType:(id)arg5 source:(long long)arg6;

@end

