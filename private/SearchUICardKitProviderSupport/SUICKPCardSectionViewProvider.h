//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CRKIdentifiedCardSectionViewProviding.h"

@class NSArray, NSString, SUICKPFeedbackDelegateDemultiplexer;

@interface SUICKPCardSectionViewProvider : NSObject <CRKIdentifiedCardSectionViewProviding>
{
    SUICKPFeedbackDelegateDemultiplexer *_feedbackDelegateDemux;
    id <CRCard> _card;
    NSArray *_viewConfigurations;
    id <CRKCardSectionViewProviderDelegate> _delegate;
}

@property(nonatomic) __weak id <CRKCardSectionViewProviderDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) id <CRCard> card; // @synthesize card=_card;
- (void).cxx_destruct;
- (unsigned long long)displayPriorityForCardSection:(id)arg1;
@property(readonly, nonatomic) NSArray *viewConfigurations; // @synthesize viewConfigurations=_viewConfigurations;
@property(readonly, copy, nonatomic) NSString *providerIdentifier;
- (id)initWithCard:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

