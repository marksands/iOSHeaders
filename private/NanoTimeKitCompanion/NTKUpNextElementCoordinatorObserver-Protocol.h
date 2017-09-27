//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSIndexPath, NSSet, NTKUpNextElement, NTKUpNextElementCoordinator;

@protocol NTKUpNextElementCoordinatorObserver <NSObject>
@property(readonly, nonatomic) NSSet *disabledDataSources;
@property(readonly, nonatomic) unsigned long long state;
- (_Bool)elementCoordinator:(NTKUpNextElementCoordinator *)arg1 isElementAtIndexPathVisible:(NSIndexPath *)arg2;
- (void)elementCoordinator:(NTKUpNextElementCoordinator *)arg1 didMoveElement:(NTKUpNextElement *)arg2 fromIndexPath:(NSIndexPath *)arg3 toIndexPath:(NSIndexPath *)arg4;
- (void)elementCoordinator:(NTKUpNextElementCoordinator *)arg1 didInsertElement:(NTKUpNextElement *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (void)elementCoordinator:(NTKUpNextElementCoordinator *)arg1 didRemoveElement:(NTKUpNextElement *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (void)elementCoordinator:(NTKUpNextElementCoordinator *)arg1 didReloadElement:(NTKUpNextElement *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (void)elementCoordinator:(NTKUpNextElementCoordinator *)arg1 performBatchUpdateBlock:(void (^)(void))arg2 completion:(void (^)(void))arg3;
@end

