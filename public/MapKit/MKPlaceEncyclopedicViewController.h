//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MapKit/MKPlaceSectionViewController.h>

#import "MKModuleViewControllerProtocol.h"
#import "_MKInfoCardChildViewControllerAnalyticsDelegate.h"

@class MKPlaceTextBlockCell, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface MKPlaceEncyclopedicViewController : MKPlaceSectionViewController <_MKInfoCardChildViewControllerAnalyticsDelegate, MKModuleViewControllerProtocol>
{
    _Bool _textBlockExpanded;
    MKPlaceTextBlockCell *_textCell;
    NSMutableArray *_factoidCells;
    id <GEOEncyclopedicInfo> _encyclopedicInfo;
    id <MKPlaceCardEncyclopedicControllerDelegate> _encyclopedicControllerDelegate;
}

@property(nonatomic) __weak id <MKPlaceCardEncyclopedicControllerDelegate> encyclopedicControllerDelegate; // @synthesize encyclopedicControllerDelegate=_encyclopedicControllerDelegate;
@property(retain, nonatomic) id <GEOEncyclopedicInfo> encyclopedicInfo; // @synthesize encyclopedicInfo=_encyclopedicInfo;
- (void).cxx_destruct;
- (id)infoCardChildPossibleActions;
- (id)_textBlockText;
- (id)_textBlockTitle;
- (id)_factoids;
- (void)_viewEncyclopedicContent;
- (void)_updateViews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

