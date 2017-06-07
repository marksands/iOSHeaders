//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoLibraryServices/NSObject-Protocol.h>

@class NSData, NSDictionary, NSString, PLPhotoEditImportProperties, PLPhotoEditMutableModel;

@protocol PLPhotoEditDataImporter <NSObject>
+ (NSDictionary *)debugDescriptionForPhotoEditData:(NSData *)arg1 formatIdentifier:(NSString *)arg2 formatVersion:(NSString *)arg3;
+ (_Bool)loadPhotoEditData:(NSData *)arg1 formatIdentifier:(NSString *)arg2 formatVersion:(NSString *)arg3 intoModel:(PLPhotoEditMutableModel *)arg4 importProperties:(PLPhotoEditImportProperties *)arg5;
+ (_Bool)canInterpretDataWithFormatIdentifier:(NSString *)arg1 formatVersion:(NSString *)arg2;
@end
