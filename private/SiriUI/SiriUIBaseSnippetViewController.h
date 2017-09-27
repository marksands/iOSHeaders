//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SiriUIViewController.h"

@class AceObject, NSString, SAUISnippet, SiriUISashItem;

@interface SiriUIBaseSnippetViewController : UIViewController <SiriUIViewController>
{
    _Bool _utteranceUserInteractionEnabled;
    AceObject *aceObject;
    SiriUISashItem *_sashItem;
    id <SiriUIAceObjectViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <SiriUIAceObjectViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isUtteranceUserInteractionEnabled) _Bool utteranceUserInteractionEnabled; // @synthesize utteranceUserInteractionEnabled=_utteranceUserInteractionEnabled;
@property(retain, nonatomic) AceObject *aceObject; // @synthesize aceObject;
- (void).cxx_destruct;
- (double)desiredTopPaddingBelowController:(id)arg1;
- (double)desiredHeight;
- (void)wasAddedToTranscript;
- (void)siriDidDeactivate;
- (void)siriWillActivateFromSource:(long long)arg1;
@property(readonly, nonatomic) SiriUISashItem *sashItem; // @synthesize sashItem=_sashItem;
- (void)siriDidReceiveAdditionalContent:(id)arg1 error:(id)arg2;
@property(retain, nonatomic) SAUISnippet *snippet;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

