//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <PhotosUICore/MFMailComposeViewControllerDelegate-Protocol.h>

@class NSArray, NSString, PHMemory, UIActivityIndicatorView, UILabel;

@interface PXMemoriesInlineProblemReportViewController : UIViewController <MFMailComposeViewControllerDelegate>
{
    _Bool _didDismissMailWindow;
    PHMemory *_memory;
    NSArray *_features;
    UILabel *_reportCaptureInProgressLabel;
    UIActivityIndicatorView *_reportCaptureInProgressActivityIndicator;
}

@property(nonatomic) _Bool didDismissMailWindow; // @synthesize didDismissMailWindow=_didDismissMailWindow;
@property(retain, nonatomic) UIActivityIndicatorView *reportCaptureInProgressActivityIndicator; // @synthesize reportCaptureInProgressActivityIndicator=_reportCaptureInProgressActivityIndicator;
@property(retain, nonatomic) UILabel *reportCaptureInProgressLabel; // @synthesize reportCaptureInProgressLabel=_reportCaptureInProgressLabel;
@property(retain, nonatomic) NSArray *features; // @synthesize features=_features;
@property(retain, nonatomic) PHMemory *memory; // @synthesize memory=_memory;
- (void).cxx_destruct;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (void)_showMailComposeWindow;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithMemory:(id)arg1 features:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

