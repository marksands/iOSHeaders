//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "EKDayAllDayViewDelegate.h"
#import "EKDayTimeViewDelegate.h"
#import "EKDayViewContentDelegate.h"
#import "UIScrollViewDelegate.h"

@class EKDayAllDayView, EKDayTimeView, EKDayViewContent, EKEvent, NSArray, NSCalendar, NSDate, NSDateComponents, NSString, NSTimer, UIColor, UIImageView, UIPinchGestureRecognizer, UIScrollView, UITapGestureRecognizer, UIVisualEffect;

@interface EKDayView : UIView <UIScrollViewDelegate, EKDayAllDayViewDelegate, EKDayViewContentDelegate, EKDayTimeViewDelegate>
{
    long long _orientation;
    double _dayStart;
    double _dayEnd;
    double _nextDSTTransition;
    _Bool _scrollbarShowsInside;
    _Bool _scrollingToOccurrence;
    _Bool _settingDate;
    _Bool _userScrolling;
    _Bool _scrollToOccurrencesOnNextReload;
    UIImageView *_topVerticalGridExtension;
    UIImageView *_bottomVerticalGridExtension;
    UIView *_bottomLine;
    NSArray *_existingTimedOcurrences;
    NSDate *_lastInspectedOccurrenceOnDate;
    struct CGSize _scrolledToFirstVisibleSecondForSize;
    EKDayAllDayView *_allDayView;
    EKDayViewContent *_dayContent;
    EKDayTimeView *_timeView;
    UIScrollView *_scroller;
    NSTimer *_timeMarkerTimer;
    struct CGPoint _lastPinchDistance;
    struct CGPoint _lastPinchPoint1;
    _Bool _pinching;
    UIPinchGestureRecognizer *_pinchGestureRecognizer;
    UITapGestureRecognizer *_doubleTapGestureRecognizer;
    _Bool _allowsOccurrenceSelection;
    _Bool _alignsMidnightToTop;
    _Bool _showOnlyAllDayArea;
    _Bool _isNowVisible;
    _Bool _scrollEventsInToViewIgnoresVisibility;
    _Bool _shouldEverShowTimeIndicators;
    _Bool _sizeTimeViewUsingOnlyHourText;
    _Bool _usesVibrantGridDrawing;
    _Bool _allowPinchingHourHeights;
    int _outlineStyle;
    id <EKDayViewDelegate> _delegate;
    id <EKDayViewDataSource> _dataSource;
    NSDateComponents *_displayDate;
    NSCalendar *_calendar;
    double _additionalLeftPadding;
    double _topYBoundaryForOccurrenceText;
    double _topContentInset;
    double _bottomContentInset;
    double _todayScrollSecondBuffer;
    double _scrollAnimationDurationOverride;
    double _hourScale;
}

@property(nonatomic) double hourScale; // @synthesize hourScale=_hourScale;
@property(nonatomic) double scrollAnimationDurationOverride; // @synthesize scrollAnimationDurationOverride=_scrollAnimationDurationOverride;
@property(nonatomic) double todayScrollSecondBuffer; // @synthesize todayScrollSecondBuffer=_todayScrollSecondBuffer;
@property(nonatomic) _Bool allowPinchingHourHeights; // @synthesize allowPinchingHourHeights=_allowPinchingHourHeights;
@property(nonatomic) _Bool usesVibrantGridDrawing; // @synthesize usesVibrantGridDrawing=_usesVibrantGridDrawing;
@property(nonatomic) int outlineStyle; // @synthesize outlineStyle=_outlineStyle;
@property(nonatomic) _Bool sizeTimeViewUsingOnlyHourText; // @synthesize sizeTimeViewUsingOnlyHourText=_sizeTimeViewUsingOnlyHourText;
@property(nonatomic) _Bool shouldEverShowTimeIndicators; // @synthesize shouldEverShowTimeIndicators=_shouldEverShowTimeIndicators;
@property(nonatomic) _Bool scrollEventsInToViewIgnoresVisibility; // @synthesize scrollEventsInToViewIgnoresVisibility=_scrollEventsInToViewIgnoresVisibility;
@property(nonatomic) _Bool isNowVisible; // @synthesize isNowVisible=_isNowVisible;
@property(nonatomic) double bottomContentInset; // @synthesize bottomContentInset=_bottomContentInset;
@property(nonatomic) double topContentInset; // @synthesize topContentInset=_topContentInset;
@property(nonatomic) double topYBoundaryForOccurrenceText; // @synthesize topYBoundaryForOccurrenceText=_topYBoundaryForOccurrenceText;
@property(nonatomic) double additionalLeftPadding; // @synthesize additionalLeftPadding=_additionalLeftPadding;
@property(nonatomic) _Bool showOnlyAllDayArea; // @synthesize showOnlyAllDayArea=_showOnlyAllDayArea;
@property(nonatomic) _Bool alignsMidnightToTop; // @synthesize alignsMidnightToTop=_alignsMidnightToTop;
@property(nonatomic) _Bool allowsOccurrenceSelection; // @synthesize allowsOccurrenceSelection=_allowsOccurrenceSelection;
@property(readonly, nonatomic) double dayEnd; // @synthesize dayEnd=_dayEnd;
@property(readonly, nonatomic) double dayStart; // @synthesize dayStart=_dayStart;
@property(copy, nonatomic) NSCalendar *calendar; // @synthesize calendar=_calendar;
@property(copy, nonatomic) NSDateComponents *displayDate; // @synthesize displayDate=_displayDate;
@property(nonatomic) __weak id <EKDayViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <EKDayViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)configureOccurrenceViewForGestureController:(id)arg1;
- (void)addViewToScroller:(id)arg1 isAllDay:(_Bool)arg2;
- (_Bool)isAllDayLabelHighlighted;
- (void)setAllDayLabelHighlighted:(_Bool)arg1;
- (double)highlightedHour;
- (void)highlightHour:(double)arg1;
- (double)allDayRegionHeight;
- (_Bool)scrollTowardPoint:(struct CGPoint)arg1;
- (struct CGPoint)pointAtDate:(double)arg1 isAllDay:(_Bool)arg2;
- (double)_adjustSecondBackwardForDSTHole:(double)arg1;
- (double)_adjustSecondForwardForDSTHole:(double)arg1;
- (double)dateAtPoint:(struct CGPoint)arg1 isAllDay:(_Bool *)arg2 requireAllDayRegionInsistence:(_Bool)arg3;
- (_Bool)_showingAllDaySection;
- (double)dateAtPoint:(struct CGPoint)arg1 isAllDay:(_Bool *)arg2;
- (id)occurrenceViewAtPoint:(struct CGPoint)arg1;
- (void)_dayViewPinched:(id)arg1;
- (double)scaledHourHeight;
- (double)maximumHourScale;
- (double)minimumHourScale;
- (struct CGPoint)_pinchDistanceForGestureRecognizer:(id)arg1;
- (void)_doubleTap:(id)arg1;
- (void)_timeViewTapped:(id)arg1;
- (void)dayViewContent:(id)arg1 didTapPinnedOccurrence:(id)arg2;
- (void)dayViewContent:(id)arg1 didTapInEmptySpaceOnDay:(double)arg2;
- (void)dayViewContent:(id)arg1 didSelectEvent:(id)arg2;
- (void)dayViewContent:(id)arg1 didCreateOccurrenceViews:(id)arg2;
- (void)occurrencePressed:(id)arg1 onDay:(double)arg2;
- (void)allDayViewDidLayoutSubviews:(id)arg1;
- (void)allDayView:(id)arg1 didSelectEvent:(id)arg2;
- (void)reloadData;
- (void)relayoutExistingTimedOccurrences;
- (void)setScrollerYInset:(double)arg1 keepingYPointVisible:(double)arg2;
- (void)scrollEventsIntoViewAnimated:(_Bool)arg1;
- (void)_disposeAllDayView;
- (void)_createAllDayView;
- (void)_updateContentForSizeCategoryChange:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)firstVisibleSecondChanged;
- (void)scrollViewDidScroll:(id)arg1;
- (void)_scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)_notifyDelegateOfFinishedScrollingToOccurrence;
- (_Bool)containsOccurrences;
@property(retain, nonatomic) EKEvent *dimmedOccurrence;
- (id)selectedEvent;
- (void)selectEvent:(id)arg1;
- (struct CGRect)rectForEvent:(id)arg1;
- (double)yPositionPerhapsMatchingAllDayOccurrence:(id)arg1;
- (id)occurrenceViewForEvent:(id)arg1;
- (_Bool)eventOccursOnThisDay:(id)arg1;
- (void)resetLastSelectedOccurrencePoint;
- (id)_generateVerticalGridExtensionImage;
- (void)_clearVerticalGridExtensionImageCache;
- (struct CGRect)_scrollerRect;
- (int)_secondAtPosition:(double)arg1;
- (double)_positionOfSecond:(int)arg1;
@property(readonly, nonatomic) double leftContentInset;
@property(readonly, nonatomic) double scrollBarOffset;
- (double)_verticalOffset;
- (void)insertViewForEvent:(id)arg1 belowViewForOtherEvent:(id)arg2;
- (void)bringEventToFront:(id)arg1;
@property(readonly, nonatomic) NSArray *allOccurrenceViews;
@property(readonly, nonatomic) NSArray *occurrenceViews;
- (void)dayAllDayView:(id)arg1 occurrenceViewClicked:(id)arg2;
- (void)dayContentView:(id)arg1 atPoint:(struct CGPoint)arg2;
- (void)scrollToNowAnimated:(_Bool)arg1 whenFinished:(CDUnknownBlockType)arg2;
- (void)scrollToDate:(id)arg1 offset:(double)arg2 animated:(_Bool)arg3 whenFinished:(CDUnknownBlockType)arg4;
- (void)scrollToDate:(id)arg1 animated:(_Bool)arg2 whenFinished:(CDUnknownBlockType)arg3;
- (void)_scrollToSecond:(int)arg1 offset:(double)arg2 animated:(_Bool)arg3 whenFinished:(CDUnknownBlockType)arg4;
- (void)_scrollToSecond:(int)arg1 animated:(_Bool)arg2 whenFinished:(CDUnknownBlockType)arg3;
- (void)scrollToEvent:(id)arg1 animated:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;
@property(nonatomic) struct CGPoint normalizedContentOffset;
@property(readonly, nonatomic) double scrollOffset;
@property(readonly, nonatomic) EKDayTimeView *timeView;
@property(readonly, nonatomic) EKDayViewContent *dayContent;
@property(readonly, nonatomic) EKDayAllDayView *allDayView;
@property(nonatomic) int occurrenceBackgroundStyle;
@property(retain, nonatomic) UIColor *occurrenceTextBackgroundColor;
@property(retain, nonatomic) UIColor *occurrenceLocationColor;
@property(retain, nonatomic) UIColor *occurrenceTimeColor;
@property(retain, nonatomic) UIColor *occurrenceTitleColor;
@property(retain, nonatomic) UIVisualEffect *timeViewVisualEffect;
@property(retain, nonatomic) UIVisualEffect *gridVisualEffect;
@property(retain, nonatomic) UIColor *gridLineColor;
@property(nonatomic) struct _NSRange hoursToRender;
@property(retain, nonatomic) UIColor *timeViewTextColor;
@property(nonatomic) _Bool allowsScrolling;
@property(nonatomic) int firstVisibleSecond;
@property(nonatomic) _Bool showsLeftBorder;
@property(nonatomic) _Bool eventsFillGrid;
@property(nonatomic) _Bool showsTimeLine;
- (struct CGRect)currentTimeRectInView:(id)arg1;
- (_Bool)_isTimeMarkerFullyUnobstructed;
@property(nonatomic) _Bool showsTimeMarker;
@property(nonatomic) _Bool animatesTimeMarker;
@property(nonatomic) _Bool showsTimeLabel;
- (void)adjustForSignificantTimeChange;
- (void)setOrientation:(long long)arg1;
- (void)setTimeZone:(id)arg1;
- (void)updateMarkerPosition;
- (void)_invalidateMarkerTimer;
- (void)_startMarkerTimer;
- (void)_adjustForDateOrCalendarChange;
- (void)stopScrolling;
- (void)adjustFrameToSpanToMidnightFromStartDate:(id)arg1;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setBackgroundColor:(id)arg1;
- (void)setOpaque:(_Bool)arg1;
- (void)removeFromSuperview;
- (void)willMoveToSuperview:(id)arg1;
- (void)_localeChanged;
@property(readonly, copy) NSString *description;
- (id)initWithFrame:(struct CGRect)arg1 orientation:(long long)arg2 displayDate:(id)arg3 backgroundColor:(id)arg4 opaque:(_Bool)arg5 scrollbarShowsInside:(_Bool)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

