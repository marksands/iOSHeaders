//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AKController, MUContentViewController, MUPDFContentViewController, NSArray, NSURL, NSUndoManager, UIView, UIViewController;

@protocol MUContentViewControllerDelegate <NSObject>
- (NSArray *)annotationControllerOfContentViewController:(MUContentViewController *)arg1 willSetToolbarItems:(NSArray *)arg2;
- (void)positionSketchOverlay:(UIView *)arg1 forContentViewController:(MUContentViewController *)arg2;
- (double)modelBaseScaleFactorOfPageAtIndex:(unsigned long long)arg1 forContentViewController:(MUContentViewController *)arg2;
- (NSUndoManager *)undoManagerForContentViewController:(MUContentViewController *)arg1;

@optional
- (UIViewController *)popoverPresentingViewControllerForAnnotationController:(AKController *)arg1;
- (void)controllerWillDismissSignatureManagerView:(AKController *)arg1;
- (void)controllerWillShowSignatureManagerView:(AKController *)arg1;
- (void)controllerWillDismissSignatureCaptureView:(AKController *)arg1;
- (void)controllerWillShowSignatureCaptureView:(AKController *)arg1;
- (void)penStrokeCompletedForAnnotationController:(AKController *)arg1;
- (void)editDetectedForAnnotationController:(AKController *)arg1;
- (void)editCheckpointReachedForAnnotationController:(AKController *)arg1;
- (_Bool)contentViewController:(MUPDFContentViewController *)arg1 shouldHandleURL:(NSURL *)arg2;
@end

