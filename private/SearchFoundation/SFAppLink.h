//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "SFAppLink.h"

@class NSData, NSDictionary, NSString, SFImage, SFPunchout;

@interface SFAppLink : NSObject <SFAppLink, NSSecureCoding, NSCopying>
{
    CDStruct_9f571ec0 _has;
    int _imageAlign;
    NSString *_title;
    SFPunchout *_appPunchout;
    SFImage *_image;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) int imageAlign; // @synthesize imageAlign=_imageAlign;
@property(retain, nonatomic) SFImage *image; // @synthesize image=_image;
@property(retain, nonatomic) SFPunchout *appPunchout; // @synthesize appPunchout=_appPunchout;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)hasImageAlign;
- (id)initWithProtobuf:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

