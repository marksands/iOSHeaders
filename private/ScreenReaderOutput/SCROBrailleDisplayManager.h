//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCROBrailleDisplayDelegate.h"

@class NSAttributedString, NSLock, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, SCROBrailleDisplay, SCROBrailleDisplayHistory, SCROBrailleDisplayManagedQueue, SCROBrailleDisplayManagerStatus, SCROBrailleEventDispatcher, SCROBrailleFormatter;

@interface SCROBrailleDisplayManager : NSObject <SCROBrailleDisplayDelegate>
{
    NSLock *_contentLock;
    SCROBrailleDisplayManagedQueue *_managedDisplayQueue;
    SCROBrailleDisplay *_bluetoothBrailleDisplay;
    SCROBrailleDisplay *_stealthBrailleDisplay;
    NSMutableDictionary *_detectedIOElementsDict;
    SCROBrailleFormatter *_currentBrailleFormatter;
    NSMutableSet *_loadedIOElements;
    struct __CFDictionary *_displayConfigurationDict;
    id <SCROSBrailleDisplayManagerDelegate> _delegate;
    _Bool _showDotsSevenAndEight;
    _Bool _lineDescriptorDisplayCallbackEnabled;
    int _outputContractionMode;
    int _inputContractionMode;
    _Bool _outputShowEightDot;
    _Bool _inputShowEightDot;
    _Bool _shouldBatchUpdates;
    _Bool _automaticBrailleTranslation;
    _Bool _wordWrapEnabled;
    unsigned int _persistentKeyModifiers;
    long long _uiStringCachedLineOffset;
    NSMutableArray *_displayModeStack;
    SCROBrailleDisplayHistory *_history;
    NSAttributedString *_mainString;
    NSAttributedString *_lineString;
    NSAttributedString *_statusString;
    SCROBrailleDisplayManagerStatus *_status;
    SCROBrailleEventDispatcher *_eventDispatcher;
    struct __CFRunLoop *_runLoop;
    struct __CFRunLoopTimer *_alertTimer;
    double _alertTimeout;
    int _alertPriority;
    _Bool _isValid;
    int _inputAccessMode;
    NSAttributedString *_blankUIString;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)setKeyboardHelpIsOn:(_Bool)arg1;
- (void)endUpdates;
- (void)beginUpdates;
- (void)setPrepareToMemorizeNextKey:(_Bool)arg1 immediate:(_Bool)arg2 forDisplayWithToken:(int)arg3;
- (void)simulateKeypress:(id)arg1;
- (struct _NSRange)rangeOfBrailleCellRepresentingCharacterAtIndex:(unsigned long long)arg1;
- (long long)tokenForRouterIndex:(long long)arg1 location:(long long *)arg2 appToken:(id *)arg3 forDisplayWithToken:(int)arg4;
- (_Bool)lineDescriptorDisplayCallbackEnabled;
- (void)setLineDescriptorDisplayCallbackEnabled:(_Bool)arg1;
- (void)showNextAnnouncement;
- (void)showPreviousAnnouncement;
- (_Bool)showDotsSevenAndEight;
- (void)setShowDotsSevenAndEight:(_Bool)arg1;
@property(nonatomic) unsigned int persistentKeyModifiers;
@property(nonatomic) int inputContractionMode;
@property(nonatomic) _Bool wordWrapEnabled;
- (_Bool)automaticBrailleTranslation;
- (void)setAutomaticBrailleTranslationEnabled:(_Bool)arg1;
@property(nonatomic) _Bool inputEightDotBraille;
- (void)setShowEightDotBraille:(_Bool)arg1;
- (_Bool)showEightDotBraille;
- (void)setContractionMode:(int)arg1;
- (int)contractionMode;
- (void)setAlwaysUsesNemethCodeForTechnicalText:(_Bool)arg1;
- (_Bool)alwaysUsesNemethCodeForTechnicalText;
- (void)configureTableWithIdentifier:(id)arg1;
- (id)tableIdentifier;
- (void)_setDisplayMode:(int)arg1;
- (id)_cachedMainStringForDisplayMode:(int)arg1;
- (void)_popDisplayModeStack;
- (void)_stopAlertTimer;
- (void)_resetAlertTimer;
- (void)_alertTimeoutHandler;
- (void)exitCurrentDisplayMode;
- (void)setAnnouncementsDisplayMode;
- (void)setUIDisplayMode;
- (int)displayMode;
- (void)panDisplayRight:(int)arg1;
- (void)panDisplayLeft:(int)arg1;
- (int)virtualStatusAlignment;
- (void)setVirtualStatusAlignment:(int)arg1;
- (long long)masterStatusCellIndex;
- (void)setMasterStatusCellIndex:(long long)arg1;
- (id)aggregatedStatus;
- (void)setAggregatedStatus:(id)arg1;
- (void)setMainAttributedString:(id)arg1 forceUpdate:(_Bool)arg2;
- (void)setMainAttributedString:(id)arg1;
- (id)mainAttributedString;
- (int)displayInputAccessMode;
- (void)setDisplayInputAccessMode:(int)arg1;
- (void)setPrimaryBrailleDisplay:(int)arg1;
- (_Bool)hasActiveDisplays;
- (_Bool)isConfigured;
- (void)_blankOutDisplaysInQueue:(id)arg1;
- (void)_saveBluetoothDisplayConfiguration:(id)arg1;
- (id)driverConfiguration;
- (void)_unloadStealthDisplay;
- (void)_loadStealthDisplay;
- (void)_resetBluetoothReconnectionTimer;
- (void)removeBluetoothDriverWithAddress:(id)arg1;
- (void)loadBluetoothDriverWithAddress:(id)arg1;
- (void)playCommandNotSupportedSoundForBrailleDisplay:(id)arg1;
- (void)playBorderHitSoundForBrailleDisplay:(id)arg1;
- (id)newBrailleDisplayCommandDispatcher;
- (id)brailleInputManager;
- (void)brailleDisplay:(id)arg1 didPanRight:(id)arg2 elementToken:(id)arg3 appToken:(id)arg4;
- (void)brailleDisplay:(id)arg1 didPanLeft:(id)arg2 elementToken:(id)arg3 appToken:(id)arg4;
- (void)brailleDisplay:(id)arg1 didDisplay:(id)arg2;
- (void)brailleDisplay:(id)arg1 memorizedKey:(id)arg2;
- (void)brailleDisplay:(id)arg1 willMemorizeKey:(id)arg2;
- (void)brailleDisplay:(id)arg1 deletedUntranslatedText:(id)arg2 speakLiterally:(_Bool)arg3;
- (void)brailleDisplay:(id)arg1 insertedUntranslatedText:(id)arg2 speakLiterally:(_Bool)arg3;
- (void)brailleDisplay:(id)arg1 didReplaceRange:(struct _NSRange)arg2 withString:(id)arg3 cursor:(unsigned long long)arg4;
- (void)brailleDidStartEditingWithDisplay:(id)arg1;
- (void)brailleDisplay:(id)arg1 pressedKeys:(id)arg2;
- (void)configurationChangedForBrailleDisplay:(id)arg1;
- (void)brailleDisplay:(id)arg1 isSleeping:(_Bool)arg2;
- (void)brailleDriverDisconnected:(id)arg1;
- (void)brailleDisplay:(id)arg1 driverDidLoad:(_Bool)arg2;
@property(nonatomic) __weak id <SCROSBrailleDisplayManagerDelegate> delegate;
- (void)_loadNextDriverForIOElement:(id)arg1;
- (id)_displayWithIOElement:(id)arg1 driverIdentifier:(id)arg2 delegate:(id)arg3;
- (void)_addDetectedIOElement:(id)arg1 withDriverIdentifier:(id)arg2;
- (void)_deviceConnectedHandler:(id)arg1;
- (void)_disableAutoDetect;
- (void)_enableAutoDetect;
- (void)_keyboardHelpHandler:(id)arg1;
- (void)_setBatchUpdates:(id)arg1;
- (void)_setAlwaysUsesNemethCodeForTechnicalText:(id)arg1;
- (void)_setTableHandler:(id)arg1;
- (void)_setDisplayInputAccessMode:(id)arg1;
- (void)_setPrimaryDisplayKeyHandler:(id)arg1;
- (void)_prepareToMemorizeNextKeyHandler:(id)arg1;
- (void)_simulateKeypressHandler:(id)arg1;
- (void)_announcementHandler:(id)arg1;
- (void)_panHandler:(id)arg1;
- (void)_setLineDescriptorCallbackEnabledHandler:(id)arg1;
- (void)_displayModeHandler:(id)arg1;
- (void)_exitCurrentDisplayMode;
- (void)_wordWrapEnabledHandler:(id)arg1;
- (void)automaticBrailleTranslationHandler:(id)arg1;
- (void)_persistentKeyModifiersHandler:(id)arg1;
- (void)inputContractionModeHandler:(id)arg1;
- (void)_showEightDotHandler:(id)arg1;
- (void)_refreshEightDotEnabledOnDisplays;
- (void)_inputEightDotHandler:(id)arg1;
- (void)_contractionModeHandler:(id)arg1;
- (void)_showDotsSevenAndEightHandler:(id)arg1;
- (void)_setMasterStatusCellIndexHandler:(id)arg1;
- (void)_setVirtualStatusAlignmentHandler:(id)arg1;
- (void)_setAggregatedStatusHandler:(id)arg1;
- (void)tokenizeString:(id)arg1 intoFormatter:(id)arg2 selection:(struct _NSRange *)arg3;
- (void)_mainDisplayHandler:(id)arg1;
- (void)handleEvent:(id)arg1;
- (_Bool)isValid;
- (void)invalidate;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

