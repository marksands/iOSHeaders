//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSIndexPath, UIDragItem, _UICollectionViewDragDestinationController;

@protocol _UICollectionViewDragDestinationControllerDelegate <NSObject>
- (void)dragDestinationControllerSessionDidEnd:(_UICollectionViewDragDestinationController *)arg1;
- (void)dragDestinationControllerSessionWillBegin:(_UICollectionViewDragDestinationController *)arg1;
- (void)dragDestinationControllerDidConcludeDrop:(_UICollectionViewDragDestinationController *)arg1;
- (void)dragDestinationController:(_UICollectionViewDragDestinationController *)arg1 didCompleteDropAnimationForDragItem:(UIDragItem *)arg2;
- (void)dragDestinationController:(_UICollectionViewDragDestinationController *)arg1 willBeginDropAnimationForDragItem:(UIDragItem *)arg2 animator:(id <UIDragAnimating>)arg3;
- (void)dragDestinationController:(_UICollectionViewDragDestinationController *)arg1 didPerformDropAtIndexPath:(NSIndexPath *)arg2;
- (void)dragDestinationController:(_UICollectionViewDragDestinationController *)arg1 willPerformDropAtIndexPath:(NSIndexPath *)arg2;
@end

