//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSString;

@interface UIKBGeometry : NSObject <NSCoding, NSCopying>
{
    NSString *m_name;
    CDStruct_73524d89 m_x;
    CDStruct_73524d89 m_y;
    CDStruct_73524d89 m_w;
    CDStruct_73524d89 m_h;
    CDStruct_73524d89 m_paddingTop;
    CDStruct_73524d89 m_paddingLeft;
    CDStruct_73524d89 m_paddingBottom;
    CDStruct_73524d89 m_paddingRight;
    _Bool m_explicitlySpecified;
    _Bool m_isTemplate;
}

+ (void)performOperations:(CDUnknownBlockType)arg1 withScale:(double)arg2;
+ (id)codeStringForValue:(CDStruct_73524d89)arg1;
+ (id)geometryWithOriginValue:(CDStruct_73524d89)arg1 sizeValue:(CDStruct_73524d89)arg2;
+ (id)geometryWithRect:(struct CGRect)arg1;
+ (id)geometry;
@property(nonatomic) _Bool isTemplate; // @synthesize isTemplate=m_isTemplate;
@property(nonatomic) _Bool explicitlySpecified; // @synthesize explicitlySpecified=m_explicitlySpecified;
@property(nonatomic, setter=setPaddingRight:) CDStruct_73524d89 paddingRight; // @synthesize paddingRight=m_paddingRight;
@property(nonatomic, setter=setPaddingBottom:) CDStruct_73524d89 paddingBottom; // @synthesize paddingBottom=m_paddingBottom;
@property(nonatomic, setter=setPaddingLeft:) CDStruct_73524d89 paddingLeft; // @synthesize paddingLeft=m_paddingLeft;
@property(nonatomic, setter=setPaddingTop:) CDStruct_73524d89 paddingTop; // @synthesize paddingTop=m_paddingTop;
@property(nonatomic, setter=setH:) CDStruct_73524d89 h; // @synthesize h=m_h;
@property(nonatomic, setter=setW:) CDStruct_73524d89 w; // @synthesize w=m_w;
@property(nonatomic, setter=setY:) CDStruct_73524d89 y; // @synthesize y=m_y;
@property(nonatomic, setter=setX:) CDStruct_73524d89 x; // @synthesize x=m_x;
@property(retain, nonatomic) NSString *name; // @synthesize name=m_name;
- (_Bool)usesAutomaticMetrics;
- (_Bool)usesPercentages;
- (id)overrideGeometry:(id)arg1;
- (struct CGRect)paddedFrameWithResolvedFrame:(struct CGRect)arg1;
- (struct CGRect)paddedFrameWithContainingFrame:(struct CGRect)arg1;
- (struct CGRect)frameWithContainingFrame:(struct CGRect)arg1;
- (struct CGRect)frame;
- (unsigned long long)hash;
- (id)shortDescription;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initTemplateWithName:(id)arg1 rect:(CDStruct_bd7e7c01)arg2 padding:(CDStruct_bd7e7c01)arg3;
- (id)initWithName:(id)arg1 rect:(CDStruct_bd7e7c01)arg2 padding:(CDStruct_bd7e7c01)arg3;

@end

