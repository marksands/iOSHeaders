//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HFItemManager.h"

@class HFHomeBuilder;

@interface HUUserListItemManager : HFItemManager
{
    HFHomeBuilder *_homeBuilder;
}

@property(readonly, nonatomic) HFHomeBuilder *homeBuilder; // @synthesize homeBuilder=_homeBuilder;
- (void).cxx_destruct;
- (CDUnknownBlockType)_comparatorForSectionIdentifier:(id)arg1;
- (id)_sectionIdentifierForItem:(id)arg1;
- (id)_identifierForSection:(unsigned long long)arg1;
- (unsigned long long)_numberOfSections;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_homeFuture;
- (id)initWithHomeBuilder:(id)arg1 delegate:(id)arg2;
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;

@end

