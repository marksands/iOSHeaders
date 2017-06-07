//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface _SUICAtomIndexed : NSObject
{
    long long _editOperation;
    unsigned long long _indexToEdit;
    unsigned long long _indexInArrayB;
    NSString *_replacementText;
}

+ (id)atomWithEditOperation:(long long)arg1 indexToEdit:(unsigned long long)arg2 newText:(id)arg3 indexInArrayB:(unsigned long long)arg4;
@property(retain, nonatomic) NSString *replacementText; // @synthesize replacementText=_replacementText;
@property(nonatomic) unsigned long long indexInArrayB; // @synthesize indexInArrayB=_indexInArrayB;
@property(nonatomic) unsigned long long indexToEdit; // @synthesize indexToEdit=_indexToEdit;
@property(nonatomic) long long editOperation; // @synthesize editOperation=_editOperation;
- (void).cxx_destruct;
- (id)description;
- (id)initWithEditOperation:(long long)arg1 indexToEdit:(unsigned long long)arg2 newText:(id)arg3 indexInArrayB:(unsigned long long)arg4;

@end

