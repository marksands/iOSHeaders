//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSMutableArray, _SFInjectedJavaScriptController;

@interface _SFWebClipMetadataFetcher : NSObject
{
    NSDictionary *_metaTags;
    NSArray *_linkTags;
    NSMutableArray *_metadataConsumers;
    _Bool _fetchingCompleted;
    _SFInjectedJavaScriptController *_jsController;
}

+ (id)metadataFetcherScriptSource;
- (void).cxx_destruct;
- (void)fetchMetadataWithConsumer:(CDUnknownBlockType)arg1;
- (id)_webClipLinkTagWithDictionary:(id)arg1;
- (void)_startFetchingMetadata;
- (id)initWithInjectedJavascriptController:(id)arg1;

@end

