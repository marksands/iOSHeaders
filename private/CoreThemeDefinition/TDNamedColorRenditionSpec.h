//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreThemeDefinition/TDRenditionSpec.h>

@interface TDNamedColorRenditionSpec : TDRenditionSpec
{
}

- (id)createCSIRepresentationWithCompression:(_Bool)arg1 colorSpaceID:(unsigned long long)arg2 document:(id)arg3;
- (void)setColorPropertiesFromCGColor:(struct CGColor *)arg1;

// Remaining properties
@property(nonatomic) double alpha; // @dynamic alpha;
@property(nonatomic) double blue; // @dynamic blue;
@property(nonatomic) long long colorSpaceID; // @dynamic colorSpaceID;
@property(nonatomic) double green; // @dynamic green;
@property(nonatomic) double red; // @dynamic red;

@end

