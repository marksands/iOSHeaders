//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoLibraryServices/PLManagedObject.h>

@class NSSet, NSString, PLDetectedFace, PLPerson;

@interface PLDetectedFaceGroup : PLManagedObject
{
}

+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (id)insertInManagedObjectContext:(id)arg1;
- (void)refreshFaces;
- (id)mutableDetectedFaces;
- (void)awakeFromInsert;

// Remaining properties
@property(retain, nonatomic) PLPerson *associatedPerson; // @dynamic associatedPerson;
@property(retain, nonatomic) NSSet *detectedFaces; // @dynamic detectedFaces;
@property(nonatomic) PLDetectedFace *keyFace; // @dynamic keyFace;
@property(nonatomic) short personBuilderState; // @dynamic personBuilderState;
@property(nonatomic) int unnamedFaceCount; // @dynamic unnamedFaceCount;
@property(retain, nonatomic) NSString *uuid; // @dynamic uuid;

@end
