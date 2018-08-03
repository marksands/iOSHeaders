//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SUICFlamesViewDelegate.h"
#import "UIScrollViewDelegate.h"
#import "VCUIAlternativeTranscriptionsViewDelegate.h"
#import "VCUIButtonTrayDelegate.h"
#import "VCUIManageVoiceShortcutConfirmationViewDelegate.h"
#import "VCUIManageVoiceShortcutInterstitialViewDelegate.h"
#import "VCUIPhraseRecognizerDelegate.h"
#import "VCUITypeToSiriFieldDelegate.h"

@class NSArray, NSString, UIScrollView, VCUIButtonTray, VCUIManageVoiceShortcutView, VCUIPhraseRecognizer, VCVoiceShortcut, VCVoiceShortcutClient;

@interface VCUIManageVoiceShortcutViewController : UIViewController <VCUIButtonTrayDelegate, UIScrollViewDelegate, VCUIPhraseRecognizerDelegate, VCUIAlternativeTranscriptionsViewDelegate, VCUIManageVoiceShortcutConfirmationViewDelegate, VCUIManageVoiceShortcutInterstitialViewDelegate, SUICFlamesViewDelegate, VCUITypeToSiriFieldDelegate>
{
    _Bool _dismissOnClientRequestsCompletion;
    _Bool _typeToSiriEnabled;
    _Bool _userIsFinished;
    _Bool _recordButtonTapped;
    id <VCUIManageVoiceShortcutViewControllerDelegate> _delegate;
    id <VCActionDonation> _actionDonation;
    VCVoiceShortcut *_voiceShortcut;
    VCVoiceShortcutClient *_voiceShortcutClient;
    UIScrollView *_scrollView;
    NSArray *_pageInAnimationBeginConstraints;
    NSArray *_pageInAnimationCompleteConstraints;
    VCUIManageVoiceShortcutView *_currentView;
    long long _currentViewState;
    VCUIButtonTray *_buttonTray;
    NSString *_originalVoiceShortcutPhrase;
    VCVoiceShortcut *_createdVoiceShortcut;
    unsigned long long _clientRequests;
    VCUIPhraseRecognizer *_phraseRecognizer;
    NSString *_latestTranscription;
    NSArray *_alternativeTranscriptions;
    NSArray *_validationResult;
}

+ (void)setVoiceRecognitionOverrideWithAudioFileAtPath:(id)arg1;
+ (void)initialize;
@property(nonatomic) _Bool recordButtonTapped; // @synthesize recordButtonTapped=_recordButtonTapped;
@property(nonatomic) _Bool userIsFinished; // @synthesize userIsFinished=_userIsFinished;
@property(nonatomic) _Bool typeToSiriEnabled; // @synthesize typeToSiriEnabled=_typeToSiriEnabled;
@property(retain, nonatomic) NSArray *validationResult; // @synthesize validationResult=_validationResult;
@property(retain, nonatomic) NSArray *alternativeTranscriptions; // @synthesize alternativeTranscriptions=_alternativeTranscriptions;
@property(retain, nonatomic) NSString *latestTranscription; // @synthesize latestTranscription=_latestTranscription;
@property(retain, nonatomic) VCUIPhraseRecognizer *phraseRecognizer; // @synthesize phraseRecognizer=_phraseRecognizer;
@property(nonatomic) _Bool dismissOnClientRequestsCompletion; // @synthesize dismissOnClientRequestsCompletion=_dismissOnClientRequestsCompletion;
@property(nonatomic) unsigned long long clientRequests; // @synthesize clientRequests=_clientRequests;
@property(retain, nonatomic) VCVoiceShortcut *createdVoiceShortcut; // @synthesize createdVoiceShortcut=_createdVoiceShortcut;
@property(retain, nonatomic) NSString *originalVoiceShortcutPhrase; // @synthesize originalVoiceShortcutPhrase=_originalVoiceShortcutPhrase;
@property(retain, nonatomic) VCUIButtonTray *buttonTray; // @synthesize buttonTray=_buttonTray;
@property(nonatomic) long long currentViewState; // @synthesize currentViewState=_currentViewState;
@property(retain, nonatomic) VCUIManageVoiceShortcutView *currentView; // @synthesize currentView=_currentView;
@property(retain, nonatomic) NSArray *pageInAnimationCompleteConstraints; // @synthesize pageInAnimationCompleteConstraints=_pageInAnimationCompleteConstraints;
@property(retain, nonatomic) NSArray *pageInAnimationBeginConstraints; // @synthesize pageInAnimationBeginConstraints=_pageInAnimationBeginConstraints;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(readonly, nonatomic) VCVoiceShortcutClient *voiceShortcutClient; // @synthesize voiceShortcutClient=_voiceShortcutClient;
@property(retain, nonatomic) VCVoiceShortcut *voiceShortcut; // @synthesize voiceShortcut=_voiceShortcut;
@property(readonly, nonatomic) id <VCActionDonation> actionDonation; // @synthesize actionDonation=_actionDonation;
@property(nonatomic) __weak id <VCUIManageVoiceShortcutViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)interstitialComplete;
- (void)inputComplete:(id)arg1;
- (void)typeToSiriFieldTextDidChange:(id)arg1;
- (void)rerecord;
- (void)alternativeTranscriptionsView:(id)arg1 didSelectTranscription:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (float)audioLevelForFlamesView:(id)arg1;
- (void)phraseRecognizer:(id)arg1 didReceiveFinalTranscription:(id)arg2 alternativeTranscriptions:(id)arg3;
- (void)phraseRecognizer:(id)arg1 didReceiveHypothesizedTranscription:(id)arg2;
- (void)phraseRecognizer:(id)arg1 availabilityDidChange:(_Bool)arg2;
- (void)phraseRecognizerDidStopRecording:(id)arg1 withError:(id)arg2;
- (void)phraseRecognizerDidStartRecording:(id)arg1 successfully:(_Bool)arg2 error:(id)arg3;
- (id)validationResultForPhrase:(id)arg1 fromResults:(id)arg2;
- (void)validateTranscription:(id)arg1 alternativeTranscriptions:(id)arg2;
- (void)updateForPhraseRecognitionComplete:(id)arg1;
- (id)filterAlternativeTranscriptions:(id)arg1 withValidationResult:(id)arg2 bestTranscription:(id)arg3;
- (id)existingIdentifierFromError:(id)arg1;
- (_Bool)dismiss;
- (void)finishedClientRequest;
- (void)startedClientRequest;
- (void)dismissWhenComplete;
- (void)createShortcutAndDismissOnSuccess:(_Bool)arg1;
- (void)createShortcut;
- (void)createOrUpdateCurrentVoiceShortcut;
- (void)updateForPhraseRecognizerAvailability;
- (void)startRecording;
- (void)didTapTypeToSiri;
- (void)didTapRecord;
- (void)didTapDone;
- (void)didTapDelete;
- (void)didTapCancel;
- (void)updateDoneButton;
- (void)updateButtonTrayBlurState;
- (void)updateButtonTrayState;
- (void)transitionToViewState:(long long)arg1 options:(id)arg2;
- (void)transitionToViewState:(long long)arg1;
- (void)animatePageIn;
- (id)alertControllerForError:(id)arg1;
- (void)addDoneButton;
- (void)updateScrollHeightMetrics;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (id)initWithVoiceShortcut:(id)arg1 voiceShortcutClient:(id)arg2;
- (id)initWithActionDonation:(id)arg1 voiceShortcutClient:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

