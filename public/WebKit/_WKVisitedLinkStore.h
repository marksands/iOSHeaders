//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WKObject.h"

@class NSString;

@interface _WKVisitedLinkStore : NSObject <WKObject>
{
    struct ObjectStorage<WebKit::VisitedLinkStore> _visitedLinkStore;
}

@property(readonly) struct Object *_apiObject;
- (void)removeVisitedLinkWithURL:(id)arg1;
- (_Bool)containsVisitedLinkWithURL:(id)arg1;
- (void)removeAll;
- (void)addVisitedLinkWithString:(id)arg1;
- (void)addVisitedLinkWithURL:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

