//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, OFLRUCache, OKPresentationViewControllerProxy;

@interface OKResourceManager : NSObject
{
    OFLRUCache *_resources;
    OKPresentationViewControllerProxy *_presentationViewController;
    NSArray *_resourceLoaders;
}

- (id)resourceWithURL:(id)arg1 copy:(_Bool)arg2;
- (id)resourceLoaderForURL:(id)arg1;
- (void)dealloc;
- (id)initWithPresentationViewController:(id)arg1;

@end

