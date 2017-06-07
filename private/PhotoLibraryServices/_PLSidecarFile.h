//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoLibraryServices/PLManagedObject.h>

@class NSDate, NSNumber, NSString, PLManagedAsset;

@interface _PLSidecarFile : PLManagedObject
{
}

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (id)insertInManagedObjectContext:(id)arg1;
- (void)setPrimitiveCompressedSizeValue:(int)arg1;
- (int)primitiveCompressedSizeValue;
@property int compressedSizeValue;
- (void)setPrimitiveIndexValue:(short)arg1;
- (short)primitiveIndexValue;
@property short indexValue;

// Remaining properties
@property(retain, nonatomic) PLManagedAsset *asset; // @dynamic asset;
@property(retain, nonatomic) NSDate *captureDate; // @dynamic captureDate;
@property(retain, nonatomic) NSNumber *compressedSize; // @dynamic compressedSize;
@property(retain, nonatomic) NSString *filename; // @dynamic filename;
@property(retain, nonatomic) NSNumber *index; // @dynamic index;
@property(retain, nonatomic) NSDate *modificationDate; // @dynamic modificationDate;
@property(retain, nonatomic) NSString *originalFilename; // @dynamic originalFilename;
@property(retain, nonatomic) NSString *uniformTypeIdentifier; // @dynamic uniformTypeIdentifier;

@end
