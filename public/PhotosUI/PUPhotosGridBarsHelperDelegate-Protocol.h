//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, PUPhotoSelectionManager, PUPhotosGridBarsHelper;

@protocol PUPhotosGridBarsHelperDelegate <NSObject>
- (void)photosGridBarsHelper:(PUPhotosGridBarsHelper *)arg1 didChange:(unsigned long long)arg2;
- (NSString *)photosGridBarsHelper:(PUPhotosGridBarsHelper *)arg1 titleForPhotoSelectionManager:(PUPhotoSelectionManager *)arg2;
- (void)photosGridBarsHelper:(PUPhotosGridBarsHelper *)arg1 getTitle:(out id *)arg2 prompt:(out id *)arg3 shouldHideBackButton:(out _Bool *)arg4 leftBarButtonItems:(out id *)arg5 rightBarButtonItems:(out id *)arg6 forPhotoSelectionManager:(PUPhotoSelectionManager *)arg7;
- (PUPhotoSelectionManager *)photosGridBarsHelperPhotoSelectionManager:(PUPhotosGridBarsHelper *)arg1;
@end

