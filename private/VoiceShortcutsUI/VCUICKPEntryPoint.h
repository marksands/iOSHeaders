//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CRKIdentifiedProviding.h"

@class NSString;

@interface VCUICKPEntryPoint : NSObject <CRKIdentifiedProviding>
{
}

@property(readonly, copy, nonatomic) NSString *providerIdentifier;
- (id)cardViewControllerForCard:(id)arg1;
- (unsigned long long)displayPriorityForCard:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

