//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IKJSObject.h"

#import "SKUIJSFakeXMLHTTPRequest.h"

@class IKJSXMLDocument, NSData, NSDictionary, NSHTTPURLResponse, NSString;

@interface SKUIJSFakeXMLHTTPRequest : IKJSObject <SKUIJSFakeXMLHTTPRequest>
{
    NSData *_data;
    NSDictionary *_performanceMetrics;
    NSHTTPURLResponse *_response;
}

- (void).cxx_destruct;
@property(readonly, retain) NSString *statusText;
@property(readonly) unsigned int status;
@property(readonly) unsigned int responseType;
@property(readonly) IKJSXMLDocument *responseXML;
@property(readonly) NSString *responseText;
@property(readonly) id response;
@property(readonly) unsigned int readyState;
@property(readonly) NSDictionary *metrics;
- (id)getResponseHeader:(id)arg1;
- (id)getAllResponseHeaders;
- (id)initWithAppContext:(id)arg1 data:(id)arg2 URLResponse:(id)arg3 performanceMetrics:(id)arg4;

@end

