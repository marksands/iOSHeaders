//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface PSIIndexToken : NSObject
{
    short _category;
    short _owningCategory;
    NSString *_text;
    NSString *_identifier;
}

@property(readonly, nonatomic) short owningCategory; // @synthesize owningCategory=_owningCategory;
@property(readonly, nonatomic) short category; // @synthesize category=_category;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy, nonatomic) NSString *text; // @synthesize text=_text;
- (id)description;
- (void)dealloc;
- (id)initWithText:(id)arg1 identifier:(id)arg2 category:(short)arg3 owningCategory:(short)arg4;

@end

