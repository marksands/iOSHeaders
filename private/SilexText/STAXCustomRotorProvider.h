//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSSet;

@interface STAXCustomRotorProvider : NSObject
{
    NSSet *_cachedAvailableRotors;
    NSObject *_rootElement;
}

@property(nonatomic) __weak NSObject *rootElement; // @synthesize rootElement=_rootElement;
@property(readonly, copy, nonatomic) NSSet *cachedAvailableRotors; // @synthesize cachedAvailableRotors=_cachedAvailableRotors;
- (void).cxx_destruct;
- (id)graphSearchForAvailableCustomRotorsAndUpdateCache;
- (id)initWithRootElement:(id)arg1;
- (id)init;

@end

