//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UINavigationController.h>

@protocol AECameraTilePresentationDelegate;

@interface AECameraTilePresentationNavigationController : UINavigationController
{
    id <AECameraTilePresentationDelegate> _presentationDelegate;
}

@property(nonatomic) __weak id <AECameraTilePresentationDelegate> presentationDelegate; // @synthesize presentationDelegate=_presentationDelegate;
- (void).cxx_destruct;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;

@end

