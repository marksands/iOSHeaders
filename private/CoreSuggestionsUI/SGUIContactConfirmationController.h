//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreSuggestionsUI/SGUISuggestionConfirmationController.h>

#import <CoreSuggestionsUI/CNContactViewControllerDelegate-Protocol.h>

@class NSString, SGRealtimeContact;

@interface SGUIContactConfirmationController : SGUISuggestionConfirmationController <CNContactViewControllerDelegate>
{
    SGRealtimeContact *_realtimeContact;
    CDUnknownBlockType _finished;
}

+ (void)rejectSuggestion:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
+ (void)confirmSuggestion:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
+ (id)_contactsSuggestionsService;
- (void).cxx_destruct;
- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;
- (void)confirmSuggestion:(id)arg1 withPresentationHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

