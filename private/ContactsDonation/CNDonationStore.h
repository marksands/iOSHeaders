//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol CNDonationAgentAdapter;

@interface CNDonationStore : NSObject
{
    id <CNDonationAgentAdapter> _adapter;
}

@property(readonly, nonatomic) id <CNDonationAgentAdapter> adapter; // @synthesize adapter=_adapter;
- (void).cxx_destruct;
- (void)removeAllRejectionsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)listRejectionsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)rejectValuesWithCollectionIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)rejectValueWithDonationIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)changeFromAccount:(id)arg1 toAccount:(id)arg2;
- (id)meCardDonations;
- (id)donatedMeCard;
- (void)fetchDonatedMeCard:(CDUnknownBlockType)arg1;
- (void)removeDonatedMeCardValuesForIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)donateMeCardValues:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithAdapter:(id)arg1;
- (id)init;

@end

