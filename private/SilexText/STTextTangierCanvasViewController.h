//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TSWPiOSCanvasViewController.h"

@class NSArray;

@interface STTextTangierCanvasViewController : TSWPiOSCanvasViewController
{
    NSArray *_installedGestureRecognizers;
}

@property(readonly, nonatomic) NSArray *installedGestureRecognizers; // @synthesize installedGestureRecognizers=_installedGestureRecognizers;
- (void).cxx_destruct;
- (void)dealloc;
- (id)targetForAction:(SEL)arg1 withSender:(id)arg2;
- (id)backgroundColorForMagnifier;
- (void)setUpGestureRecognizers;
- (void)setUpGestureDependenciesWithScrollView:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (id)actionForHyperlink:(id)arg1 inRep:(id)arg2 gesture:(id)arg3;

@end

