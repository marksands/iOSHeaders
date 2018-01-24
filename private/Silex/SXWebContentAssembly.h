//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NFAssembly.h"

@class NSString;

@interface SXWebContentAssembly : NSObject <NFAssembly>
{
    unsigned long long _features;
}

@property(readonly, nonatomic) unsigned long long features; // @synthesize features=_features;
- (_Bool)isFeatureEnabled:(unsigned long long)arg1;
- (void)loadInRegistry:(id)arg1;
- (id)initWithFeatures:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

