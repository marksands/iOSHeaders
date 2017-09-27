//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCROBrailleDisplayCommandDispatcherDelegate.h"
#import "SCROBrailleDriverDelegate.h"

@class NSLock, NSString, SCROBrailleDisplayInput, SCROBrailleDisplayStatus, SCROBrailleEventDispatcher, SCROBrailleLine;

@interface SCROBrailleDisplay : NSObject <SCROBrailleDisplayCommandDispatcherDelegate, SCROBrailleDriverDelegate>
{
    NSLock *_contentLock;
    id <SCROBrailleDisplayDelegate> _delegate;
    id <SCROBrailleDisplayCommandDispatcherProtocol> _commandDispatcher;
    id <SCROBrailleDriverProtocol> _brailleDriver;
    id <SCROIOElementProtocol> _ioElement;
    SCROBrailleLine *_brailleLine;
    int _outputContractionMode;
    int _inputContractionMode;
    _Bool _outputShowEightDot;
    _Bool _inputShowEightDot;
    _Bool _shouldBatchUpdates;
    _Bool _needsUpdating;
    _Bool _automaticBrailleTranslationEnabled;
    _Bool _wordWrapEnabled;
    NSString *_driverIdentifier;
    NSString *_driverModelIdentifier;
    long long _mainSize;
    long long _statusSize;
    _Bool _postsKeyboardEvents;
    int _brailleInputMode;
    SCROBrailleDisplayStatus *_status;
    SCROBrailleEventDispatcher *_eventDispatcher;
    struct __CFRunLoop *_runLoop;
    struct __CFRunLoopTimer *_inputEventTimer;
    struct __CFRunLoopTimer *_blinkerEventTimer;
    _Bool _blinkingEnabled;
    _Bool _inputAllowed;
    _Bool _inputEnabled;
    SCROBrailleDisplayInput *_input;
    _Bool _isValid;
    _Bool _delegateWantsDisplayCallback;
    unsigned int _persistentKeyModifiers;
}

+ (id)displayWithIOElement:(id)arg1 driverIdentifier:(id)arg2 delegate:(id)arg3;
+ (_Bool)brailleDriverClassIsValid:(Class)arg1;
@property(nonatomic) unsigned int persistentKeyModifiers; // @synthesize persistentKeyModifiers=_persistentKeyModifiers;
@property(nonatomic) _Bool outputShowEightDot; // @synthesize outputShowEightDot=_outputShowEightDot;
@property(nonatomic) _Bool inputShowEightDot; // @synthesize inputShowEightDot=_inputShowEightDot;
@property(nonatomic) int outputContractionMode; // @synthesize outputContractionMode=_outputContractionMode;
@property(nonatomic) int inputContractionMode; // @synthesize inputContractionMode=_inputContractionMode;
@property(nonatomic) _Bool automaticBrailleTranslationEnabled; // @synthesize automaticBrailleTranslationEnabled=_automaticBrailleTranslationEnabled;
@property(nonatomic) _Bool inputAllowed; // @synthesize inputAllowed=_inputAllowed;
- (void).cxx_destruct;
- (void)_delayedSleepNotification:(id)arg1;
- (void)_sleepNotification:(id)arg1;
- (void)_delayedConfigurationChangeNotification;
- (void)_configurationChangeNotification:(id)arg1;
- (void)_delayedUnloadNotification;
- (void)_unloadNotification:(id)arg1;
- (void)_blinkerEventHandler;
- (void)_inputEventHandler;
- (void)brailleDriverDidReceiveInput;
- (id)_newBrailleKeyboardKeyForText:(id)arg1 modifiers:(unsigned int)arg2;
- (id)_newBrailleKeyForCurrentKeyChord;
- (id)_newBrailleKeyForCurrentBrailleChord;
- (void)handleUnsupportedKeyEvent:(id)arg1 forDispatcher:(id)arg2;
- (void)handleCommandToggleEightDotBrailleEvent:(id)arg1 forDispatcher:(id)arg2;
- (void)handleCommandToggleContractedBrailleEvent:(id)arg1 forDispatcher:(id)arg2;
- (void)handleCommandTranslateForDispatcher:(id)arg1;
- (void)handleCommandReturnBrailleEvent:(id)arg1 forDispatcher:(id)arg2;
- (void)handleCommandEscapeForDispatcher:(id)arg1;
- (void)handleCommandForwardDeleteKeyEvent:(id)arg1 forDispatcher:(id)arg2;
- (void)handleCommandDeleteKeyEvent:(id)arg1 forDispatcher:(id)arg2;
- (void)handleCommandRouterKeyEvent:(id)arg1 forDispatcher:(id)arg2;
- (void)handleCommandMoveRightForDispatcher:(id)arg1;
- (void)handleCommandMoveLeftForDispatcher:(id)arg1;
- (void)handleCommandPanRightForDispatcher:(id)arg1;
- (void)handleCommandPanLeftForDispatcher:(id)arg1;
- (id)brailleInputManager;
- (id)keyArrayForBrailleStringWithCurrentModifiers:(id)arg1;
- (_Bool)_hasBrailleChord;
- (_Bool)_hasKeyChord;
- (void)_stopMemorization;
- (_Bool)_isMemorizingKeys;
- (_Bool)_hasPressedBrailleKeys;
@property(readonly, nonatomic) long long lineOffset;
@property(readonly, nonatomic) unsigned long long brailleLineGenerationID;
- (void)_panHandler:(id)arg1;
- (void)_processKeyEvents:(id)arg1;
- (id)_translatedBrailleStringAndKeyEvents:(out id *)arg1 replacementRange:(out struct _NSRange *)arg2 cursor:(out unsigned long long *)arg3;
- (void)_translateBrailleStringAndPostEventAppendingKeys:(id)arg1;
- (void)_translateBrailleStringAndPostEvent;
- (void)_startEditingText;
- (void)_keyboardHelpHandler:(id)arg1;
- (void)_configurationChangeHandler;
- (void)_updateDisplay;
- (void)_setBatchUpdates:(id)arg1;
- (void)_bulkStatusAttributesHandler:(id)arg1;
- (void)_simulateKeypressHandler:(id)arg1;
- (void)_setDelegateWantsDisplayCallbackHandler:(id)arg1;
- (void)_aggregatedStatusHandler:(id)arg1;
- (void)_statusDisplayHandler:(id)arg1;
- (void)_setBrailleFormatter:(id)arg1;
- (void)_setBrailleFormatterHandler:(id)arg1;
- (id)_statusStringWithDictionary:(id)arg1;
- (void)_unloadHandler;
- (void)handleEvent:(id)arg1;
- (long long)tokenForRouterIndex:(long long)arg1 location:(long long *)arg2 appToken:(id *)arg3;
- (void)setKeyboardHelpIsOn:(_Bool)arg1;
- (void)setPrepareToMemorizeNextKey:(_Bool)arg1 immediate:(_Bool)arg2;
- (void)panRight;
- (void)panLeft;
- (void)simulateKeypress:(id)arg1;
- (void)setStatusAttributesWithMasterCellIndex:(long long)arg1 virtualAlignment:(int)arg2;
@property(nonatomic) _Bool delegateWantsDisplayCallback;
- (long long)masterStatusCellIndex;
- (void)setMasterStatusCellIndex:(long long)arg1;
- (int)virtualStatusAlignment;
- (void)setVirtualStatusAlignment:(int)arg1;
- (id)aggregatedStatus;
- (void)setAggregatedStatus:(id)arg1;
- (id)virtualStatus;
- (id)realStatus;
- (void)setBrailleFormatter:(id)arg1;
- (void)endUpdates;
- (void)beginUpdates;
- (id)configuration;
@property(nonatomic) _Bool wordWrapEnabled;
- (long long)statusSize;
- (long long)mainSize;
- (int)token;
- (id)ioElement;
- (id)lineDescriptor;
- (id)driverModelIdentifier;
- (id)driverIdentifier;
- (_Bool)isLoaded;
- (_Bool)isValid;
- (void)invalidate;
- (void)unsleep;
- (void)sleep;
- (void)dealloc;
- (void)_runThread;
- (void)_delayedDisplayLoad;
- (id)_initWithDriver:(id)arg1 driverIdentifier:(id)arg2 ioElement:(id)arg3 delegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

