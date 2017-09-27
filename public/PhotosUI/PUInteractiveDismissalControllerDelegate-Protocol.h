//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PUInteractiveDismissalController, PUTileController, PUTilingView, UIView, UIViewController;

@protocol PUInteractiveDismissalControllerDelegate <NSObject>
- (UIViewController *)interactiveDismissalControllerViewController:(PUInteractiveDismissalController *)arg1;
- (UIView *)interactiveDismissalControllerViewHostingGestureRecognizers:(PUInteractiveDismissalController *)arg1;

@optional
- (PUTileController *)interactiveDismissalControllerDesignatedTileController:(PUInteractiveDismissalController *)arg1;
- (PUTilingView *)interactiveDismissalControllerTilingView:(PUInteractiveDismissalController *)arg1;
- (_Bool)interactiveDismissalController:(PUInteractiveDismissalController *)arg1 canBeginDismissalAtLocationFromProvider:(id <PUDisplayLocationProvider>)arg2;
@end

