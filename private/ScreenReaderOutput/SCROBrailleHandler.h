//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ScreenReaderOutput/SCROHandler.h>

#import "SCROSBrailleDisplayManagerDelegate.h"

@class NSString, SCROBrailleDisplayManager;

@interface SCROBrailleHandler : SCROHandler <SCROSBrailleDisplayManagerDelegate>
{
    SCROBrailleDisplayManager *_brailleDisplayManager;
    _Bool _wantsInputCallbacks;
    _Bool _wantsDidDisplayCallbacks;
    struct {
        _Bool didDisplay;
        _Bool keypress;
        _Bool replaceTextRange;
        _Bool keyWillMem;
        _Bool keymem;
        _Bool panLeft;
        _Bool panRight;
        _Bool showPreviousAnnouncement;
        _Bool showNextAnnouncement;
        _Bool configChanged;
        _Bool playDisplayConnectionSound;
        _Bool playBorderHitSound;
        _Bool playCommandNotSupportedSound;
        _Bool bluetoothDisplayLoadFailed;
        _Bool tableLoadFailed;
        _Bool displayModeChanged;
        _Bool startEditing;
        _Bool insertUntranslatedText;
        _Bool deleteUntranslatedText;
    } _callbacks;
}

- (void).cxx_destruct;
- (void)handlePlayCommandNotSupportedSound;
- (void)handlePlayBorderHitSound;
- (void)handleDisplayModeChanged:(id)arg1;
- (void)handleBrailleTableFailedToLoad:(id)arg1;
- (void)handleFailedToLoadBluetoothDevice:(id)arg1;
- (void)configurationDidChange;
- (void)handleBrailleDriverDidLoad;
- (void)handleBrailleDriverDisconnected;
- (void)handleBrailleDidShowNextAnnouncement:(id)arg1;
- (void)handleBrailleDidShowPreviousAnnouncement:(id)arg1;
- (void)handleBrailleDidPanRight:(id)arg1 elementToken:(id)arg2 appToken:(id)arg3;
- (void)handleBrailleDidPanLeft:(id)arg1 elementToken:(id)arg2 appToken:(id)arg3;
- (void)handleBrailleDidDisplay:(id)arg1;
- (void)handleBrailleKeyMemorize:(id)arg1;
- (void)handleBrailleKeyWillMemorize:(id)arg1;
- (void)handleBrailleDeletedUntranslatedText:(id)arg1 speakLiterally:(_Bool)arg2;
- (void)handleBrailleInsertedUntranslatedText:(id)arg1 speakLiterally:(_Bool)arg2;
- (void)handleStartEditing;
- (void)handleBrailleReplaceTextRange:(struct _NSRange)arg1 withString:(id)arg2 cursor:(unsigned long long)arg3;
- (void)handleBrailleKeypress:(id)arg1;
- (int)handlePerformActionForKey:(int)arg1 trusted:(_Bool)arg2;
- (int)handleGetValue:(id *)arg1 forKey:(int)arg2 withObject:(id)arg3 trusted:(_Bool)arg4;
- (int)handleSetValue:(id)arg1 forKey:(int)arg2 trusted:(_Bool)arg3;
- (int)handleRegisterCallbackForKey:(int)arg1 trusted:(_Bool)arg2;
- (void)invalidate;
- (id)initWithBrailleDisplayManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

