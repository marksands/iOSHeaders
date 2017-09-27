//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

@class KNRecording, KNSlideTree, KNSoundtrack, KNTheme, KNUIState, TSSStylesheet;

__attribute__((visibility("hidden")))
@interface KNShow : TSPObject
{
    KNUIState *_uiState;
    KNTheme *_theme;
    KNSlideTree *_slideTree;
    TSSStylesheet *_stylesheet;
    KNRecording *_recording;
    struct CGSize _size;
    double _autoplayTransitionDelay;
    double _autoplayBuildDelay;
    double _idleTimerDelay;
    long long _mode;
    _Bool _loopPresentation;
    _Bool _idleTimerActive;
    _Bool _automaticallyPlaysUponOpen;
    _Bool _needsToUpdateThumbnails;
    _Bool _wasImportedAsPreUFF;
    _Bool _localizeDocument;
    KNSoundtrack *_soundtrack;
}

+ (unsigned long long)maximumHeightForExport;
+ (unsigned long long)maximumHeight;
+ (unsigned long long)minimumHeight;
+ (unsigned long long)maximumWidthForExport;
+ (unsigned long long)maximumWidth;
+ (unsigned long long)minimumWidth;
+ (id)showWithSize:(struct CGSize)arg1 context:(id)arg2;
@property(nonatomic) _Bool localizeDocument; // @synthesize localizeDocument=_localizeDocument;
@property(readonly, nonatomic) _Bool wasImportedAsPreUFF; // @synthesize wasImportedAsPreUFF=_wasImportedAsPreUFF;
@property(readonly, nonatomic) _Bool needsToUpdateThumbnails; // @synthesize needsToUpdateThumbnails=_needsToUpdateThumbnails;
@property(readonly, nonatomic) TSSStylesheet *stylesheet; // @synthesize stylesheet=_stylesheet;
@property(retain, nonatomic) KNTheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) KNUIState *uiState; // @synthesize uiState=_uiState;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isPlayable) _Bool playable;
- (id)slideNodesAtIndexes:(id)arg1;
- (id)slideNodeAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexOfSlideNode:(id)arg1;
- (void)willModify;
- (struct CGPoint)center;
- (id)initWithSize:(struct CGSize)arg1 context:(id)arg2;
@property(readonly, nonatomic) _Bool slideNumbersVisible;
- (void)setStylesheetForUpgradeToSingleStylesheet:(id)arg1;
@property(retain, nonatomic) KNRecording *recording;
@property(retain, nonatomic) KNSoundtrack *soundtrack;
@property(nonatomic) _Bool automaticallyPlaysUponOpen;
@property(nonatomic) _Bool idleTimerActive;
@property(nonatomic) _Bool loopPresentation;
@property(nonatomic) long long mode;
@property(nonatomic) double idleTimerDelay;
@property(nonatomic) double autoplayBuildDelay;
@property(nonatomic) double autoplayTransitionDelay;
@property(retain, nonatomic) KNSlideTree *slideTree;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (void)saveToArchive:(struct ShowArchive *)arg1 archiver:(id)arg2;
- (void)loadFromArchive:(const struct ShowArchive *)arg1 unarchiver:(id)arg2;

@end

