//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, PLPhotoEditExportProperties, PLPhotoEditModel;

@protocol PLPhotoEditDataExporter <NSObject>
+ (NSData *)dataFromPhotoEditModel:(PLPhotoEditModel *)arg1 outFormatIdentifier:(id *)arg2 outFormatVersion:(id *)arg3 exportProperties:(PLPhotoEditExportProperties *)arg4;
@end

