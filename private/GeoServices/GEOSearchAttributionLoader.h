//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GEOSearchAttributionManifest;

__attribute__((visibility("hidden")))
@interface GEOSearchAttributionLoader : NSObject
{
    GEOSearchAttributionManifest *_attributionManifest;
}

- (void).cxx_destruct;
- (void)loadAttributionInfoForIdentifier:(id)arg1 allowNetwork:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithAttributionManifest:(id)arg1;

@end

