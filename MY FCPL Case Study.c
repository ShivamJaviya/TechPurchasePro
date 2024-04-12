#include <stdio.h>
void welcome();
void Title();
void mobile();
void talblet();
void leptop();
void pc();
void earphone();
void headphone();
void watch();
void camera();
void other();
void outside();
void nvinput();

void main()
{
    int a;
    
	welcome();
    
    Title();
    
    printf(" \n\n\t Choice your Device  :  \n\t\t\t\t 1. Mobile \n\n\t\t\t\t 2. Talblet \n\n\t\t\t\t 3. Leptop \n\n\t\t\t\t 4. PC \n\n\t\t\t\t 5. Earphone \n\n\t\t\t\t 6. Head \n\n\t\t\t\t 7. Watch \n\n\t\t\t\t 8. Camera \n\n\t\t\t\t 9. Other \n\n\t\t\t\t 10. Exit  ");
    printf ("\n\t Enter your Device No : ");
    scanf(" %d", &a);
    
    system("cls");

    switch (a)
    {
    	
	// mobile
    case 1:
        mobile();
        break;
        
        
    // tablet
	case 2:
       	talblet();
    	break;

    // leptop
    case 3:
        leptop();
        break;

    // pc
    case 4:
        pc();
        break;
        

	// ear phone
   	 case 5:
        earphone();
        break;
        

    // head
    case 6:
        headphone();
        break;
        

    // watch
	case 7:
    	watch();
       	 break;
       		 

	// camera
	 case 8:
	    camera();
	    break;
	        

    // other
    case 9:
        other();
        break;
        
    // exit 
     case 10:
     	outside();
     	break;


    default:
        printf("\n\n \n\n\t\t# ***  Invalid input, please enter right input : ... ");
        getch();
    }
}

// ================================================ mobile ===================================================================================================
void mobile()
{
    int a, a1, a11, a2, a3, a4, a5;
    Title();
    
    
    printf(" \n\n\t Choice your phone price budget  \n\n\t\t\t\t 1. 10000 under \n\n\t\t\t\t 2. 20000 under\n\n\t\t\t\t 3. 50000 under\n\n\t\t\t\t 4. 100000 under\n\n\t\t\t\t 5. 100000 above\n ");
    printf ("\n\tEnter you Choice No : ");
	scanf("%d", &a1);

    system("cls");

    // 10000 under
    if (a1 == 1)
    {
    	Title();
    	
        printf(" \n\n\n\t  Choice Phone : \n\n\t\t\t\t 1. Realmec12 \n\n\t\t\t\t 2. Moto e7plue \n\n\t\t\t\t 3. readmi 9prime \n\n\t\t\t\t 4. Sumsung M01s\n\n\t\t\t\t 5. Realme Narzo 10a  ");
       	printf ("\n\tEnter your Choice No : ");
	    scanf("%d", &a11);

        //realme12
        if (a11 == 1)
        {
            system("explorer  https://www.realme.com/in/realme-c12 ");
        }

        // moto
        else if (a11 == 2)
        {
            system("explorer https://www.motorola.in/smartphones-moto-e-plus-gen-7/p  ");
        }

        //readmi
        else if (a11 == 3)
        {
            system("explorer  https://www.flipkart.com/redmi-9-prime-matteblack-64-gb/p/itmcc28962a9a4fe");
        }

        //samsung
        else if (a11 == 4)
        {
            system("explorer  https://www.flipkart.com/samsung-galaxy-m01s-grey-32-gb/p/itm4c2b9eb29cf24");
        }
        else if (a11==5)
        {
        	system("explorer  https://www.realme.com/in/realme-narzo-10a ");	
		}

        //relme narzo 10a
        else
        {
            nvinput();
        }
    }

    // 20000 under
    else if (a1 == 2)
    {
    	Title();
        printf(" \n\n\n\t  Choice Phone : \n\n\t\t\t\t  (1) Realme 7i  \n\n\t\t\t\t  (2) oppo f17 \n\n\t\t\t\t  (3) Redmi 9pro max \n\n\t\t\t\t  (4) poco X2 \n\n\t\t\t\t  (5) Realme 6pro  ");
        printf ("\n\tEnter your Choice No : ");
		scanf("%d", &a2);
        // r 7i
        if (a2 == 1)
        {
            system("explorer https://www.realme.com/in/realme-7i ", 1);
        }
        //oppo f17
        else if (a2 == 2)
        {
            system("explorer https://www.flipkart.com/oppo-f17-9wjw-92ijwi-store?ocmpid=BrandAd_oppoF17_MediaBuying_FK6&gclid=CjwKCAjw_Y_8BRBiEiwA5MCBJvAND40IwAU1caUwzn6HKz73gSehqfEbOYVraDJwRN2Hzpdto6D9exoCQ24QAvD_BwE ", 2);
        }
        // re 9pro m
        else if (a2 == 3)
        {
            system("explorer https://www.mi.com/in/redmi-note-9-pro-max/ ", 3);
        }
        // poco x2
        else if (a2 == 4)
        {
            system("explorer https://www.flipkart.com/poco-x2-atlantis-blue-64-gb/p/itmbe7b58e0378b8 ", 4);
        }
         // r 6 pro
        else if (a2==5)
        {
        	system("explorer https://www.realme.com/in/realme-6-pro");	
		}
       
        else
        {
           nvinput(); 
        }
    }

    // 50000 under
    else if (a1 == 3)
    {
    	Title();
    	
        printf(" \n\n\n\t 50000 under \n \n\n\t\t\t\t 1. Iphone XR \n\n\t\t\t\t 2.One plue 7pro \n\n\t\t\t\t 3. Realme X3");
        printf ("\n\tEnter your Choice No : ");
        scanf("%d", &a3);
        // ip xr
        if (a3 == 1)
        {
            system("explorer https://www.apple.com/in/iphone-xr/specs/");
        }
        // op 7p
        else if (a3 == 2)
        {
            system(" explorer https://www.oneplus.in/7pro#/");
        }
        //r x3
        else if (a3==3)
        {
            system(" explorer https://www.realme.com/in/realme-x3-superzoom");
        }
        else
        {
           nvinput(); 
        }
    }

    // 100000 in
    else if (a1 == 4)
    {
    	
    	Title();
    	
        printf(" \n\n\n\t Choice Phone :\n\n\t\t\t\t 1. iphone 11  \n\n\t\t\t\t 2. Oneplus 8pro \n\n\t\t\t\t 3. Samsung Galaxy S20 Ultra \n\n\t\t\t\t 4. Asus ROG3 \n\n\t\t\t\t 5. Sumsung Note10 /n (6) iphone 12  ");
        printf ("\n\tEnter your Choice No : ");
		scanf("%d", &a4);

        // ip 11p
        if (a4 == 1)
        {
            system(" explorer https://www.reliancedigital.in/apple-iphone-11-128-gb-black-smartphone/p/491584660?gclid=Cj0KCQjwreT8BRDTARIsAJLI0KJfB5tuD5MkLPclnbithAy93BWq9vWsB3DS_Gr5tiUlO0MtVj3x4fcaAkD_EALw_wcB ");
        }

        // one plue
        else if (a4 == 2)
        {
            system(" explorer https://www.oneplus.in/8-pro ");
        }

        //samsung
        else if (a4 == 3)
        {
            system(" explorer  https://www.samsung.com/in/smartphones/galaxy-s20/  ");
        }

        //asus
        else if (a4 == 4)
        {
            system(" explorer  https://www.flipkart.com/asus-rog-phone-3-black-128-gb/p/itm93ba84fa7cce9");
        }

        // samsung note 10
        else if (a4 == 5)
        {
            system(" explorer  https://www.samsung.com/in/smartphones/galaxy-note10/ ");
        }

        // iphone 12
        else if (a4==6)
        {
            system(" explorer  https://www.apple.com/in/iphone-12/?afid=p238%7Cs8W8iCZm4-dc_mtid_20925gyh65756_pcrid_474665249501_pgrid_112235616420_&cid=wwa-in-kwgo-iphone-slid--Brand-iPhone12-Preorder- ");
        }
        else
        {
           nvinput(); 
        }
    }

    // 100000 up
    else
    {
    	Title();
    	
        printf("\n\n\n\tChoice Phone : \n\n\t\t\t\t  (1) iphone 12pro max \n\n\t\t\t\t  (2) samsung Galaxy Flod 2 \n\n\t\t\t\t  (3) iphone 11pro max \n\n\t\t\t\t  (4) Samsung Galaxy Z Flip \n  ");
        printf ("\n\tEnter your Choice No : ");
	    scanf(" %d", &a5);

        // ip 12
        if (a5 == 1)
        {
            system(" explorer   https://www.flipkart.com/apple-iphone-12-pro-gold-256-gb/p/itm43a6a8ee7a1e7?pid=MOBFWBYZ9NGKZS9W&lid=LSTMOBFWBYZ9NGKZS9WKCMR0H&marketplace=FLIPKART&cmpid=content_mobile_11376370276_g_8965229628_gmc_pla&tgi=sem,1,G,11214002,g,search,,473218706285,,,,c,,,,,,,&gclid=Cj0KCQjwreT8BRDTARIsAJLI0KLgpMI0XUbDG9D29SyBu0mu1OrDB3LL2_dfpFY7ZtxP2dhOX2gSq1QaAnR1EALw_wcB&gclsrc=aw.ds");
        }

        // samsung
        else if (a5 == 2)
        {
            system(" explorer https://www.samsung.com/in/smartphones/galaxy-z-fold2/ ");
        }

        // iphone 11promax
        else if (a5 == 3)
        {
            system(" explorer  https://www.flipkart.com/apple-iphone-11-pro-max-gold-512-gb/p/itm01d0dc585bc07");
        }

        // samsung galaxy z flip
        else if (a5==4)
        {
            system(" explorer  https://www.poorvikamobile.com/samsung-galaxy-fold-cosmos-black-512gb-12gb-ram ");
        }
        else
        {
           nvinput(); 
        }

        getch();
    }
    getch();
}

//**********================================================ talblet ================================================================================================***********************
void talblet()
{
    int b, b1, b2, b3, b4;
    Title();
    
    printf(" \n\n\n\tYour Talblet Use for  : \n\n\t\t\t\t 1. Learning  use \n\n\t\t\t\t 2. Professional use  \n\n\t\t\t\t 3. Gaming use \n  ");
    printf ("\n\tEnter your Choice No : ");
	scanf(" %d", &b1);
    system("cls");

    // learing
    if (b1 == 1)
    {
    	Title();
    	
        printf(" \n\n\n\tChoice your device : \n\n\t\t\t\t 1. Samsung Galaxy Tab A7\n\n\t\t\t\t 2. iPaid pro 2018 \n\n\t\t\t\t 3. Samsung GAlaxy Tab S7+ \n  ");
        scanf(" %d", &b2);
        system("cls");

        if (b2 == 1)
        {
            system(" explorer  https://www.samsung.com/in/tablets/galaxy-tab-a7-wifi-t500n/SM-T500NZAPINU/?cid=in_pd_ppc_google_hhp-products_festive-sales_rewardyourself-2020_text_20201023_11452834699-111612839243-samsung%20galaxy%20tab%20a7-474967329982-1ur-10893l");
        }

        else if (b2 == 2)
        {
            system(" explorer https://www.flipkart.com/apple-ipad-pro-2018-64-gb-rom-11-inch-wi-fi-only-silver/p/itmfb5z4zdffp6rg  ");
        }

        else if (b2==3)
        {
            system(" explorer https://www.amazon.in/Samsung-Galaxy-inch-Wi-Fi-Internal/dp/B08FN5DHN7 ");
        }
        else
        {
           nvinput(); 
        }
    }
    // professional
    else if (b1 == 2)
    {
    	Title();
    	
        printf("\n\n\n\tChoice your device : \n\n\t\t\t\t 1.Samsung Galaxy Tab S6 \n\n\t\t\t\t 2. ipad air 2 \n\n\t\t\t\t 3. ipad pro 2020 ");
        printf ("\n\tEnter your Choice No : ");
		scanf(" %d", &b3);

        if (b3 == 1)
        {
            system(" explorer https://www.amazon.com/Samsung-Galaxy-128GB-Tablet-Cloud/dp/B07VFFCHL9 ");
        }
        else if (b3 == 2)
        {
            system(" explorer https://www.reliancedigital.in/apple-ipad-air-4th-gen-27-68-cm-10-9-inch-wi-fi-tablet-64-gb-rose-gold-myfp2hn-a/p/491901109?gclid=Cj0KCQjwufn8BRCwARIsAKzP696gZGdfCXzagsfIgtcqWlZ5b4YAcQ86rw_7U23Ndx7ie68-s2QvUTEaAquXEALw_wcB");
        }
        else if (b3==3)
        {
            system(" explorer https://www.apple.com/in/ipad-pro/?afid=p238%7Csu4hXzmhg-dc_mtid_187079nc38483_pcrid_473341793915_pgrid_109967082376_&cid=aos-IN-kwgo-ipad--slid---product- ");
        }
        else
        {
           nvinput(); 
        }
    }
    //gaming
    else
    {
    	Title();
    	
        printf("\n\n\n\tChoice your device : \n\n\t\t\t\t 1. ipad pro 11(2018) \n\n\t\t\t\t 2. Microsoft Surface Pro.\n\n\t\t\t\t 3. ipad pro 2020 (12.9 inch) ");
        printf ("\n\tEnter your Choice No : ");
		scanf(" %d", &b4);
        // ipd p 11
        if (b4 == 1)
        {
            system(" explorer https://www.flipkart.com/apple-ipad-pro-2018-64-gb-rom-11-inch-wi-fi-only-silver/p/itmfb5z4zdffp6rg");
        }
        else if (b4 == 2)
        {
            system(" explorer https://www.microsoft.com/en-in/surface/devices/surface-pro-7?activetab=overview ");
        }
        else if (b4==3)
        {
            system(" explorer https://www.apple.com/in/ipad-pro/?afid=p238%7CsmrzZKR1V-dc_mtid_187079nc38483_pcrid_473341793894_pgrid_109645757236_&cid=aos-IN-kwgo-ipad--slid---product- ");
        }
        else
        {
           nvinput(); 
        }
        getch();
    }
    getch();
}

//**********================================================ leptop ================================================================================================***********************
void leptop()
{
	Title();
	
    int cc, c1, c2, c3, c4;
    printf(" \n\n\n\t Your Leptop use for : \n\n\t\t\t\t 1. Learning  use \n\n\t\t\t\t 2. Professional use  \n\n\t\t\t\t 3. Gaming use \n  ");
    printf ("\n\tEnter your Choice No : ");
	scanf(" %d", &c1);
    system("cls");

    // len

    if (c1 == 1)
    {
    	Title();
    	
        printf("\n\n\n\t Choice your device : \n\n\t\t\t\t 1. Lenovo Ideapad Flex 5 Core i3 10th Gen \n\n\t\t\t\t 2. HP 15-db0244au Laptop (AMD A9-9425) \n\n\t\t\t\t 3. Asus X511  ");
        printf ("\n\tEnter your Choice No : ");
		scanf(" %d", &c2);
        system("cls");
        // lev
        if (c2 == 1)
        {
            system(" explorer https://www.amazon.in/Lenovo-IdeaPad-Convertible-Graphite-81X10084IN/dp/B087D4GCN4");
        }
        // hp
        else if (c2 == 2)
        {
            system(" explorer https://www.reliancedigital.in/hp-15-db0244au-laptop-amd-a9-9425-4gb-1tb-hdd-windows-10-mso-fhd-39-62-cm-15-6-inch-/p/491584303 ");
        }
        //asus
        else if (c2==3)
        {
            system(" explorer https://www.amazon.in/ASUS-VivoBook-X512FL-EJ511TS-15-6-inch-Graphics/dp/B083QDCMKX ");
        }
        else
        {
           nvinput(); 
        }
    }

    // prof

    else if (c1 == 2)
    {
    	Title();
    	
        printf("\n\n\t  Choice your device : \n\n\t\t\t\t (1) Hp Chromebook X360 Core  \n\n\t\t\t\t (2) Lenovo Yoga C640 10th Gen Intel Core i5 \n\n\t\t\t\t (3) Apple MacBook Pro MVVK2HN/A  \n\n\t\t\t\t (4) Apple Macbook air \n");
        printf ("\n\tEnter your Choice No : ");
		scanf("%d", &c3);

        // hp
        if (c3 == 1)
        {
            system(" explorer https://store.hp.com/in-en/default/personal-laptops-pavilion-x360?jumpid=ps_fsut49qi7m&utm_medium=Search&utm_source=Google&utm_campaign=IN_Q4_FY20_CPCS-Premium_SpectreFolio_Brand_SEM&utm_content=Banner_Brand&utm_term=1x1&dclid=&gclid=Cj0KCQjwufn8BRCwARIsAKzP695hWmAfU0-tuw5hyv9LrmlKF6yJfd0RhmdrnXw71VQxmaJoCogDhMgaAkE2EALw_wcB");
        }
        // lev y
        else if (c3 == 2)
        {
            system(" explorer  https://www.amazon.in/Lenovo-81UE0034IN-13-3-inch-Convertible-Integrated/dp/B083PFZXC4");
        }
        // appl pro
        else if (c3 == 3)
        {
            system(" explorer https://www.flipkart.com/apple-macbook-pro-core-i9-9th-gen-16-gb-1-tb-ssd-mac-os-catalina-4-gb-graphics-mvvk2hn-a/p/itm1fc58c7ecac1c ");
        }
        // ap air
        else if (c3==4)
        {
            system(" explorer https://www.flipkart.com/apple-macbook-air-core-i5-5th-gen-8-gb-128-gb-ssd-mac-os-sierra-mqd32hn-a-a1466/p/itmevcpqqhf6azn3  ");
        }
        else
        {
           nvinput(); 
        }
        getch();
    }

    // gaming

    else
    {
    	Title();
    	
        printf(" \n\n\t Choice your device : \n\n\t\t\t\t 1. ASUS ROG Strix G17 G712LU-EV013T  \n\n\t\t\t\t 2. ASUS 17.3 Republic of Gamers Mothership GZ700GX 2 \n\n\t\t\t\t 3. HP 15-dh0135tx \n\n\t\t\t\t 4. ASUS ZenBook Pro Duo UX581  \n  ");
        printf ("\n\tEnter your Choice No : ");
		scanf("%d", &c4);

        // asus st
        if (c4 == 1)
        {
            system(" explorer  https://www.amazon.in/ASUS-G712LU-EV013T-i7-10750H-Backlit-Windows/dp/B08H8QK9RY");
        }
        // asus 17.3
        else if (c4 == 2)
        {
            system(" explorer https://www.amazon.com/Mothership-Display-GeForce-i9-9980HK-GZ700GX-XB98K/dp/B0812P6PTW ");
        }
        // hp 15
        else if (c4 == 3)
        {
            system(" explorer https://www.flipkart.com/hp-15-dh-core-i7-9th-gen-16-gb-1-tb-hdd-512-gb-ssd-windows-10-4-graphics-nvidia-geforce-gtx-1650-15-dh0135tx-gaming-laptop/p/itmfhvhykbqhfyyx ");
        }
        //asus
        else if (c4==4)
        {
            system(" explorer  https://www.flipkart.com/asus-zenbook-pro-duo-core-i9-9th-gen-32-gb-1-tb-ssd-windows-10-home-6-gb-graphics-ux581gv-h9201t-laptop/p/itm9980944520074  ");
        }
        else
        {
           nvinput(); 
        }
        getch();
    }
    getch();
}

//**********================================================ pc ================================================================================================***********************
void pc()
{
    int d, d1, d2, d3, d4;
    Title();

    printf(" \n\n\t Your Leptop use for : \n\n\t\t\t\t 1. Learning  use \n\n\t\t\t\t 2. Professional use \n\n\t\t\t\t 3. Gaming use \n  ");
    printf ("\n\tEnter your Choice No : ");
	scanf(" %d", &d1);
    system("cls");

    // lea
    if (d1 == 1)
    {
    	Title();
    	
        printf("\n\n\t Choice your device : \n\n\t\t\t\t 1. Foxin FoxinC2D Core 2 Duo   \n\n\t\t\t\t 2. HP AIO Pentium Dual Core \n\n\t\t\t\t 3. Lenovo Ideacentre Pentium Dual Core \n\n\t\t\t\t 4. Dell Inspiron Core i3 (8th Gen)  \n  ");
        scanf("%d", &d2);

        // fox
        if (d2 == 1)
        {
            system(" explorer  https://www.flipkart.com/foxin-foxinc2d-core-2-duo-4-gb-ddr2-500-gb-windows-7-ultimate-4-gb-15-6-inch-screen-foxinassembled112/p/itmfebfnzjddxa3m  ");
        }
        // hp
        else if (d2 == 2)
        {
            system(" explorer https://www.flipkart.com/hp-pentium-dual-core-4-gb-1-tb-windows-10-assembled-desktop-computer/p/itmf256u6ymhy5ue ");
        }
        //lev
        else if (d2 == 3)
        {
            system(" explorer https://www.flipkart.com/lenovo-ideacentre-pentium-dual-core-4-gb-ddr4-1-tb-windows-10-home-21-5-inch-screen-a340-22iwl/p/itmd9dfcec7acae2 ");
        }
        //dell
        else if (d2==4)
        {
          	system(" explore https://paytmmall.com/dell-inspiron-22-3280-all-in-one-desktop-with-stand-intel-pentium-gold-8th-gen-4-gb-ram-1-tb-hdd-54-61-cm-21-5-inch-fhd-windows-10-home-ms-office-home-student-2019-black-CMPLXLAPDELL-INSPIRODUMM2025695A25B65-pdp?product_id=331642086");
        }
        else
        {
           nvinput(); 
        }
        getch();
    }
    // prof
    else if (d1 == 2)
    {
    	Title();
    	
        printf("\n\n\t Choice your device : \n\n\t\t\t\t 1. Mca Pro (2020)  \n\n\t\t\t\t 2. Hp Desktop i7 mini chromebox \n\n\t\t\t\t 3. New Apple iMac Pro \n\n\t\t\t\t 4. HP 23.8-inch FHD All in One Desktop with Alexa Built-in \n  ");
        printf ("\n\tEnter your Choice No : ");
		scanf("%d", &d3);

        //
        if (d3 == 1)
        {
            system(" explorer  https://www.apple.com/in/mac-pro/ ");
        }
        // hp
        else if (d3 == 2)
        {
            system(" exeplorer https://www.amazon.in/Renewed-HP-Performance-Compact-5inch/dp/B08F6L8Z4V/ref=sr_1_1_sspa?adgrpid=64651970851&dchild=1&ext_vrnc=hi&gclid=Cj0KCQjwufn8BRCwARIsAKzP694soTbBggVDOQAgcQIAchJDBCKQjxFYdOQiDbyGtDENK5_NsGvXAeoaAnUyEALw_wcB&hvadid=294110921913&hvdev=c&hvlocphy=1007759&hvnetw=g&hvqmt=b&hvrand=16539172687167208695&hvtargid=kwd-361177514597&hydadcr=21673_1813068&keywords=mini+pc+i7&qid=1604221106&sr=8-1-spons&tag=googinhydr1-21&psc=1&spLa=ZW5jcnlwdGVkUXVhbGlmaWVyPUEzUTVYQ0RaWjZLOVVZJmVuY3J5cHRlZElkPUEwOTY1NTg5MVM3Q1FEUUlDUFlLTyZlbmNyeXB0ZWRBZElkPUEwMDI5MjY4MTFaR1hPMjhRSDlTNyZ3aWRnZXROYW1lPXNwX2F0ZiZhY3Rpb249Y2xpY2tSZWRpcmVjdCZkb05vdExvZ0NsaWNrPXRydWU=  ");
        }
        // new app i m
        else if (d3 == 3)
        {
            system(" exeplorer https://www.amazon.in/Apple-27-inch-10-core-Processor-Storage/dp/B08FBL33J8 ");
        }
        // hp all in
        else if (d3==4)
        {
            system(" exeplorer   https://store.hp.com/in-en/default/hp-all-in-one-22-c0163il-5qc67aa.html ");
        }
        else
        {
           nvinput(); 
        }
        getch();
    }

    // gaming

    else
    {
    	Title();

        printf("\n\n\t Choice your device : \n\n\t\t\t\t 1. Intel Core i7 9700K 9th Generation Pro \n\n\t\t\t\t 2. ASUS ROG Huracan G21CN Intel Core i5-9400F 9th Gen Gaming Desktop \n\n\t\t\t\t 3. ZILLA Gaming Desktop Intel Core i5  \n\n\t\t\t\t 4. HP 23.8-inch FHD All in One Desktop with Alexa Built-in \n  ");
        printf ("\n\tEnter your Choice No : ");
		scanf(" %d", &d4);

        // intel
        if (d4 == 1)
        {
            system(" explorer https://www.amazon.in/MSI-PRO-LGA1151-Gigabit-Motherboard/dp/B07J6Z9KJ2  ");
        }
        // asus
        else if (d4 == 2)
        {
            system(" explorer  https://www.flipkart.com/asus-core-i5-9400f-8-gb-ram-nvidia-geforce-gtx-1650-graphics-512-ssd-capacity-windows-10-64-bit-4-graphics-memory-gaming-tower/p/itm1a738bbfa8a46");
        }
        else if (d4 == 3)
        {
            system(" exeplorer  https://www.amazon.in/ZILLA-Gaming-7200RPM-GTX1650-Graphic/dp/B07XC1YZRK ");
        }
        else if (d4==4)
        {
            system(" explorer https://www.amazon.in/HP-23-8-inch-Desktop-i3-1005G1-24-dp0816in/dp/B08GDBK3LD  ");
        }
        else
        {
           nvinput(); 
        }
        getch();
    }
    getch();
}
//**********================================================ ear phone  ================================================================================================***********************
void earphone()
{
	Title();
	
    int e1, e2, e3, e4, e5, e6, e7, e8, e9, e10, e11, e12, e13, e14, e15, e16, e17, e18, e19, e20;

    printf(" \n\n\tYour ear phone price budget : \n\n\t\t\t\t 1. 5000 under \n\n\t\t\t\t 2. 5000 about ");
    printf ("\n\tEnter your Choice No : ");
	scanf("%d", &e2);
    system("cls");

    // 5000 under

    if (e2 == 1)
    {
    	Title();
    	
        printf("\n\n\t Choice your device : \n\n\t\t\t\t 1. Relame buds \n\n\t\t\t\t 2. oneplue buds \n\n\t\t\t\t 3. JBL buds \n\n\t\t\t\t 4. oppo buds \n\n\t\t\t\t 5. Noise buds ");
        printf ("\n\tEnter your Choice No : ");
		scanf(" %d", &e3);

        // re
        if (e3 == 1)
        {
            system("explorer https://www.realme.com/in/realme-buds-air-neo");
        }

        // one
        else if (e3 == 2)
        {
            system("explorer https://www.oneplus.in/oneplus-buds ");
        }

        //JBL
        else if (e3 == 3)
        {
            system("explorer https://www.flipkart.com/jbl-c100tws-true-wireless-google-assistant-bluetooth-headset/p/itmbf9d5f3aa7842  ");
        }

        //oppo
        else if (e3 == 4)
        {
            system(" explorer https://www.flipkart.com/oppo-enco-w11-bluetooth-headset/p/itmdc282c5b40896 ");
        }

        // niose
        else if(e4==5)
        {
            system(" explorer https://www.flipkart.com/noise-shots-groove-truly-wireless-bluetooth-headset/p/itme337321814468?pid=ACCFZ25FFYABDVMJ&lid=LSTACCFZ25FFYABDVMJAB8UUD&marketplace=FLIPKART&fm=productRecommendation%2Fsimilar&iid=R%3As%3Bp%3AACCFTQBRSDTSNM5G%3Bpt%3App%3Buid%3A23c757c3-1cbf-11eb-9569-058b13616541%3B.ACCFZ25FFYABDVMJ.LSTACCFZ25FFYABDVMJAB8UUD&ppt=pp&ppn=pp&ssid=l84zf16ym80000001604289276354&otracker=pp_reco_Similar%2BProducts_8_34.productCard.PMU_HORIZONTAL_Noise%2BShots%2BGroove%2BTruly%2BWireless%2BBluetooth%2BHeadset_ACCFZ25FFYABDVMJ.LSTACCFZ25FFYABDVMJAB8UUD_productRecommendation%2Fsimilar_7&otracker1=pp_reco_PINNED_productRecommendation%2Fsimilar_Similar%2BProducts_GRID_productCard_cc_8_NA_view-all&cid=ACCFZ25FFYABDVMJ.LSTACCFZ25FFYABDVMJAB8UUD ");
        }
        else
        {
           nvinput(); 
        }
        getch();
    }

    // 5000 above
    else
    {
    	Title();
    	
        printf("\n\n\t Choice your device : \n\n\t\t\t\t 1. Apple airpods pro  \n\n\t\t\t\t 2. Jabra elite Active 75t \n\n\t\t\t\t 3. Samsung Galaxy Buds+ \n\n\t\t\t\t 4. Sony WF-SP800N \n\n\t\t\t\t 5. Sennheiser momentum   ");
        printf ("\n\tEnter your Choice No : ");
		scanf(" %d", &e4);

        // ap
        if (e4 == 1)
        {
            system(" explorer https://www.flipkart.com/apple-airpods-pro-wireless-charging-case-active-noise-cancellation-enabled-bluetooth-headset/p/itmc756ca2f85eea ");
        }

        // ja
        else if (e4 == 2)
        {
            system(" explorer https://www.jabra.in/bluetooth-headsets/jabra-elite-active-75t##100-99091001-40 ");
        }

        //sam
        else if (e4 == 3)
        {
            system(" explorer http://www.samsung.com/in/wearables/galaxy-buhttpsds-live-r180/SM-R180NZBAINU/?cid=in_pd_ppc_google_hhp-products_festive-sales_rewardyourself-2020_text_20201023_11449676547-111200068039-samsung%20galaxy%20buds%2B-474973278189-1ur-10900l  ");
        }

        //sony
        else if (e4 == 4)
        {
            system(" explorer https://www.sony.co.in/electronics/truly-wireless/wf-sp800n ");
        }

        // snas
        else if(e4==5)
        {
            system(" explorer  https://www.flipkart.com/sennheiser-momentum-true-wireless-bluetooth-headset/p/itm4431d074422965");
        }
        else
        {
           nvinput(); 
        }
        getch();
    }
    getch();
}

//**********================================================ head phone ================================================================================================***********************
void headphone()
{
	Title();
	
    int e1, e2, e3, e4, e5, e6, e7, e8, e9, e10, e11, e12, e13, e14, e15, e16, e17, e18, e19, e20;

    printf(" \n\n\tChoice your device : \n\n\t\t\t\t 1. Sony WH-1000XM4 \n\n\t\t\t\t 2. The Sennheiser HD 820 \n\n\t\t\t\t 3. Design D8000\n\n\t\t\t\t 4. The Roller MK01 headphones \n\n\t\t\t\t 5. JBL Live 400BT ");
    printf ("\n\tEnter your Choice No : ");
	scanf("%d", &e4);
    system("cls");

    // sony
    if (e4 == 1)
    {
        system(" explorer https://www.sony.co.in/electronics/headband-headphones/wh-1000xm4 ");
    }

    //the senn
    else if (e4 == 2)
    {
        system(" explorer  https://en-in.sennheiser.com/high-end-headphones-audiophiles-hd-820 ");
    }

    // D800
    else if (e4 == 3)
    {
        system(" explorer https://www.amazon.com/Final-Audio-Design-Over-Ear-Headphones/dp/B076M3B85S ");
    }

    //thE ROLLER
    else if (e4 == 4)
    {
        system(" explorer https://luzli.com/shop/headphones/tt321-roller-mk01-black/ ");
    }

    // JBL
    else if(e4==5)
    {
        system(" explorer https://www.jbl.com/over-ear-headphones/JBL+LIVE400BT.html ");
    }
    else
    {
        nvinput(); 
    }
    getch();
}
//**********================================================ watch ================================================================================================***********************
void watch()
{
    int e1, e2, e3, e4, e5, e6, e7, e8, e9, e10, e11, e12, e13, e14, e15, e16, e17, e18, e19, e20;
    Title();
    

    printf(" \n\n\tYour Watch use for  : \n\n\t\t\t\t 1. Premium Watch \n\n\t\t\t\t 2. Samart Watch  \n\n\t\t\t\t 3. Fitness Band \n ");
    printf ("\n\tEnter your Choice No : ");
	scanf("%d", &e5);
    system("cls");

    // premium watch
    if (e5 == 1)
    {
    	Title();
    	
        printf("\n\n\tChioce your Watch : \n\n\t\t\t\t 1. customised Patek Philippe Nautilus 5980  \n\n\t\t\t\t 2. Patek Philippe - 1956 pre-owned Calatrava \n\n\t\t\t\t 3. Corum Golden Bridge \n\n\t\t\t\t 4. MAD Paris - customised Rolex Daytona  \n\n\t\t\t\t 5. Unisex Luminous Watch LED Wristwatch \n ");
        printf ("\n\tEnter your Choice No : ");
		scanf("%d", &e6);
        system("cls");

        // cut
        if (e6 = 1)
        {
            system(" explorer https://www.farfetch.com/in/shopping/men/mad-paris-customised-patek-philippe-nautilus-5980-45mm-item-14419434.aspx ");
        }

        // pata
        else if (e6 == 2)
        {
            system(" explorer https://www.farfetch.com/in/shopping/men/patek-philippe-1956-pre-owned-calatrava-35mm-item-15525822.aspx ");
        }

        // corum
        else if (e6 == 3)
        {
            system(" explorer  https://www.ethoswatches.com/product-golden-bridge-313-165-55-0002-gl10r.html?utm_source=Google&utm_medium=Google-PLA&utm_campaign=All-Lead-Brands-Shopping&gclid=CjwKCAiA-f78BRBbEiwATKRRBBYIz-QCN260UJ7P94rnfFjrfq6QkjiwQ8rHi7eBQjPMN0ypylpl8RoCMLoQAvD_BwE");
        }

        // rolex
        else if (e6 == 4)
        {
            system(" explorer  https://www.rolex.com/watches/cosmograph-daytona.html?ef_id=CjwKCAiA-f78BRBbEiwATKRRBGh52Ui_1fXKP281gT7_zgzmtuhqoJUX8hDWceetwcbhw8mMHcwgyxoCeSYQAvD_BwE:G:s&s_kwcid=AL!141!3!407197661203!b!!g!!%2Brolex%20%2Bdaytona ");
        }

        // pata
        else if (e6==5)
        {
            system(" explorer    https://lcpshop.net/product/unisex-luminous-watch-led-wristwatch/");
        }
        else
        {
           nvinput(); 
        }
        getch();
    }

    // samart watch
    else if (e5 == 2)
    {
    	Title();
    	
        printf("\n\n\tChioce your Watch : \n\n\t\t\t\t 1. Apply Series - 6  \n\n\t\t\t\t 2. OPPO OW19W8 \n\n\t\t\t\t 3. Samsung Galaxy Watch 3  \n\n\t\t\t\t 4. Realme Classic Smartwatch  \n\n\t\t\t\t 5. Honor Watch Magic  \n ");
        printf ("\n\tEnter your Choice No : ");
		scanf("%d", &e6);

        // apply
        if (e6 == 1)
        {
            system(" explorer https://www.apple.com/in/apple-watch-series-6/ ");
        }

        // oppo
        else if (e6 == 2)
        {
            system(" explorer https://www.oppo.com/in/accessory-oppo-watch/ ");
        }

        // samsung
        else if (e6 == 3)
        {
            system(" explorer https://www.samsung.com/in/wearables/galaxy-watch3-r845/SM-R845FZSAINS/?cid=in_pd_ppc_google_hhp-products_festive-sales_rewardyourself-2020_text_20201023_11453702078-115656995887-samsung%20galaxy%20watch%203-475046188259-1ur-10895l ");
        }

        // realme
        else if (e6 == 4)
        {
            system(" explorer  https://www.realme.com/in/realme-watch ");
        }

        // honor
        else if (e6==5)
        {
            system(" explorer  https://www.hihonor.com/global/products/wearables/honor-watch-magic/ ");
        }
        else
        {
           nvinput(); 
        }
        getch();
    }

    // fitness bamd
     else if (e5 == 3)
    {
    	Title();
    	
        printf("\n\n\tChioce your Watch : \n\n\n\t\t\t\t 1. HONOR Band 5 \n\n\n\t\t\t\t 2. Realme Bracelet \n\n\n\t\t\t\t 3. Fitbit Inspire FB412BKBK Fitness Band \n\n\n\t\t\t\t 4. Samsung Galaxy Fit SM-R370  \n\n\n\t\t\t\t 5. REFLEX 2.0 SMART BAND \n ");
        printf ("\n\tEnter your Choice No : ");
		scanf("%d", &e7);

        // honor
        if (e7 == 1)
        {
            system(" explorer https://www.hihonor.com/global/products/wearables/honorband5/ ");
        }

        // realme
        else if (e7 == 2)
        {
            system(" explorer https://www.realme.com/in/realme-band ");
        }

        // fitbit
        else if (e7 == 3)
        {
            system(" explorer  https://www.reliancedigital.in/fitbit-inspire-fb412bkbk-fitness-band-black/p/491550904?gclid=CjwKCAiA-f78BRBbEiwATKRRBAwWUz-L2jDTyPyzsKXHtrGKSt2VkRFoC_Ku-sjkSxdQpMiIMDfj8RoC1F4QAvD_BwE");
        }

        // samsung
        else if (e7 == 4)
        {
            system(" explorer https://www.samsung.com/levant/wearables/galaxy-fit-r370/SM-R370NZKAMID/ ");
        }

        //  reflex
        else if (e7==5)
        {
            system(" explorer https://www.fastrack.in/shop/watch-smart-wearables?utm_source=Google&utm_medium=CPC&utm_campaign=10895228566&utm_adgroup=109931508649&utm_term=%2Breflex%20smart%20watch&creative=458264157282&device=c&devicemodel=&matchtype=b&feeditemid=&targetid=kwd-941446058048&network=g&placement=&adposition=&GA_loc_interest_ms=&GA_loc_physical_ms=1007759&gclid=CjwKCAiA-f78BRBbEiwATKRRBKbIdXOjXLHf2IYCP_qU3K79BWHGW6r3yLKjW7yisvwB7GLfS8SJiRoC2zQQAvD_BwE ");
        }
        else
        {
           nvinput(); 
        }
        getch();
    }
    else
    {
       nvinput(); 
    }
        getch();
    getch();
}

//**********================================================ camera ================================================================================================***********************
void camera()
{

    int e1, e2, e3, e4, e5, e6, e7, e8, e9, e10, e11, e12, e13, e14, e15, e16, e17, e18, e19, e20;
    Title();
    

    printf("\n\n\t Your Camera use for :\n\n\n\t\t\t\t 1. Photography \n\n\n\t\t\t\t 2. Personal \n  ");
    printf ("\n\tEnter your Choice No : ");
    scanf(" %d", &e8);
    system("cls");

    // photography

    if (e8 == 1)
    {
    	Title();
    	
        printf("\n\n\t\t\t\t Chioce your Watch : \n\n\t\t\t\t(1) Canon Eos 5d Mark Iv Dslr  \nt\t\t\t (2) Sony Alpha a7  \nt\t\t\t (3) Nikon D850 DSLR \nt\t\t\t (4) Sony Alpha ILCE-7M3K \nt\t\t\t (5) Canon EOS 6D Mark \n ");
        printf ("\n\tEnter your Choice No : ");
		scanf("%d", &e9);

        // canon
        if (e9 == 1)
        {
            system(" explorer https://www.sony.co.in/electronics/interchangeable-lens-cameras/ilce-7rm4?cid=sem-am-7443&gclid=CjwKCAiA-f78BRBbEiwATKRRBK-fk4joy7PpWJFFMXNGeMREPzWek3V8BC_J8xgnwLHLMfcAvbkVUhoCpHYQAvD_BwE ");
        }

        //sony
        else if (e9 == 2)
        {
            system(" explorer https://www.sony.co.in/electronics/interchangeable-lens-cameras/ilce-7m3-body-kit?cid=sem-am-7444&gclid=CjwKCAiA-f78BRBbEiwATKRRBIyiZVMwoKXS5K-6OltBunWtrRXNxZBFaHgNZ9S3efIVv-u2cYB1RhoC7f8QAvD_BwE");
        }

        //nikon
        else if (e9 == 3)
        {
            system(" explorer https://www.nikon.co.in/en_IN/product/digital-slr-cameras/d850 ");
        }

        // sony a mk
        else if (e9 == 4)
        {
            system(" explorer   https://www.sony.co.in/electronics/interchangeable-lens-cameras/ilce-7rm3?cid=sem-am-7442&gclid=CjwKCAiA-f78BRBbEiwATKRRBMAXha6M4cvNbVFbmrWUb3k05g21zrz8LS3mHNgD9RjGWXSZ1dw5vRoCGmgQAvD_BwE   ");
        }

        // canon 6d
        else if(e9==5)
        {
            system(" explorer  https://www.sony.co.in/electronics/interchangeable-lens-cameras/ilce-7rm3?cid=sem-am-7442&gclid=CjwKCAiA-f78BRBbEiwATKRRBHL9zJS_L6hbLMT613ohicFrowhLe6ji6xgy32w4mEc0up7949H2-BoCpUwQAvD_BwE ");
        }
        else
        {
           nvinput(); 
        }
        getch();
    }

    // personal

    else
    {
    	Title();
    	
        printf(" \n\n\tChioce your Watch : \n\n\n\t\t\t\t 1. Canon 200D \n\n\n\t\t\t\t 2. Nikon 3800D \n\n\n\t\t\t\t 3. Sony A7 \n\n\n\t\t\t\t 4. Canon 700D  \n ");
        printf ("\n\tEnter your Choice No : ");
		scanf("%d", &e10);

        // canon
        if (e9 == 1)
        {
            system(" explorer  https://in.canon/en/consumer/eos-200d-kit2/product ");
        }

        //sony
        else if (e9 == 2)
        {
            system(" explorer https://www.nikon.co.in/en_IN/product/digital-slr-cameras/d5600 ");
        }

        //nikon
        else if (e9 == 3)
        {
            system(" explorer https://www.amazon.in/Sony-Full-Frame-Mirrorless-Interchangeable-Lens-Camera/dp/B07B43WPVK/ref=asc_df_B07B43WPVK/?tag=googleshopdes-21&linkCode=df0&hvadid=397009265704&hvpos=&hvnetw=g&hvrand=12890591240231226271&hvpone=&hvptwo=&hvqmt=&hvdev=c&hvdvcmdl=&hvlocint=&hvlocphy=1007759&hvtargid=pla-552735796258&psc=1&ext_vrnc=hi ");
        }

        // sony a mk
        else if (e9==4)
        {
            system(" explorer  https://www.flipkart.com/canon-eos-700d-dslr-camera-body-dual-lens-ef-s18-55-mm-ii-s55-250-16-gb-sd-card-bag/p/itme6fwcz9evqnxr ");
        }
        else
        {
           nvinput(); 
        }
        getch();
    }
    getch();
}

//**********================================================ other ================================================================================================***********************
void other()
{

    int e1, e2, e3, e4, e5, e6, e7, e8, e9, e10, e11, e12, e13, e14, e15, e16, e17, e18, e19, e20;
    Title();

    printf("\n\n\tChoice  your accessories : \n\n\n\t\t\t\t 1. Speakers\n\n\n\t\t\t\t 2. DATA Storage \n\n\n\t\t\t\t 3. Pwore bank \n\n\n\t\t\t\t 4. Smart Assistant \n\n\n\t\t\t\t 5. Mobile accessories \n\n\n\t\t\t\t 6. Leptop accessories   ");
    printf ("\n\tEnter your Choice No : ");
	scanf("%d", &e1);
    system("cls");

    //speakers

    if (e1 == 1)
    {
    	Title();
    	
        printf(" \n\n\tSpeakers \n Your phone  price budget  \n\n\n\t\t\t\t 1. 5000 under \n\n\n\t\t\t\t 2. 5000 adove \n  ");
        scanf("%d", &e11);
        system("cls");

        //5000 in
        if (e11 == 1)
        {
            printf(" \n\n\tChioce your speakers : \n\n\n\t\t\t\t(1) Jbl Flip 4\n\n\n\t\t\t\t (2) Sony SRS-XB12 \n\n\n\t\t\t\t (3) boAt AAVANTE BAR 1150  \n\n\n\t\t\t\t (4) Creative Muvo 2 \n\n\n\t\t\t\t (5) Saregama Carvaan  ");
            printf ("\n\tEnter your Choice No : ");
			scanf("%d", &e12);

            // jbl
            if (e12 == 1)
            {
                system(" explorer  https://www.jbl.com/bluetooth-speakers/JBL+Flip+4.html");
            }

            // sony
            else if (e12 == 2)
            {
                system(" explorer https://www.sony.co.in/electronics/wireless-speakers/srs-xb12 ");
            }

            // boat
            else if (e12 == 3)
            {
                system(" explorer  https://www.flipkart.com/boat-aavante-bar-1150-60-w-bluetooth-soundbar/p/itm1fe41ecae973b");
            }

            // creative
            else if (e12 == 4)
            {
                system(" explorer https://www.flipkart.com/creative-muvo-2-bluetooth-wireless-speaker-black-12-w/p/itm1b0acb8058965 ");
            }

            // boat
            else if(e12==5)
            {
                system(" explorer   https://www.saregama.com/carvaan?cstm_ppc_keyword=Sa%20re%20ga%20ma%20carvaan&cstm_ppc_placement=&cstm_GCLID=CjwKCAiA-f78BRBbEiwATKRRBMEz4-Ug61CU3XSlljWXkA-kgrx8KirgbpBwpJBtDHyo5SOOKS3O0RoCqnYQAvD_BwE&cstm_ppc_device=c&cstm_ppc_campaign=GS-Brand_Carvaan-Common-Campaign_RSA1&cstm_ppc_channel=Google_Search&Keyword=Sa%20re%20ga%20ma%20carvaan&Placement=&Device=c&utm_source=Google_Search&utm_medium=CPC&utm_campaign=GS-Brand_Carvaan-Common-Campaign_RSA1&srgm_campaign=GS-Brand_Carvaan-Common-Campaign_RSA1&pk_campaign=GS-Brand_Carvaan-Common-Campaign_RSA1&pk_kwd=sa%20re%20ga%20ma%20carvaan&pk_source=Google_Search&pk_medium=CPC&pk_content=Text_Ads&gclid=CjwKCAiA-f78BRBbEiwATKRRBMEz4-Ug61CU3XSlljWXkA-kgrx8KirgbpBwpJBtDHyo5SOOKS3O0RoCqnYQAvD_BwE ");
            }
            else
     	    {
         	  nvinput(); 
      	 	}
            getch();
        }

        //5000 abevo
        else
        {
        	Title();
        	
            printf(" \n\n\tChioce your speakers : \n\n\n\t\t\t\t 1. MARSHALL STANMORE \n\n\n\t\t\t\t 2.  JBL PRX835 \n\n\n\t\t\t\t 3. Harman Kardon Citation Tower \n\n\n\t\t\t\t 4. JBL Boom Box Most-Powerful Portable \n\n\n\t\t\t\t 5. Sony BDV-N9200 ");
            printf ("\n\tEnter your Choice No : ");
			scanf("%d", e13);

            // 	marsh
            if (e13 == 1)
            {
                system(" explorer https://www.marshallheadphones.com/in/en/stanmore-bluetooth.html ");
            }

            // JBL
            else if (e13 == 2)
            {
                system("explorer https://jblpro.com/en/products/prx835");
            }

            // harman
            else if (e13 == 3)
            {
                system("explorer https://www.harmanaudio.in/CITATION+TOWER.html");
            }

            // JBL
            else if (e13 == 4)
            {
                system("explorer https://www.flipkart.com/jbl-boombox-bluetooth-party-speaker/p/itm5ac46db102fd1");
            }

            // sony
            else if (e13==5)
            {
                system("explorer https://www.sony.co.in/electronics/all-in-one-home-cinema-systems/bdv-n9200w-n9200wl");
            }
            else
       		 {
          		 nvinput(); 
       		 }
            getch();
        }
        getch();
    }

    // data storeg dives

    else if (e1 == 2)
    {
    	Title();
    	
        printf(" \n\n\tChioce your DATA storage : \n\n\n\t\t\t\t 1. Cloud Storege \n\n\n\t\t\t\t 2. PenDrive \n\n\n\t\t\t\t 3. Hard disk \n ");
        printf ("\n\tEnter your Choice No : ");
		scanf("%d", &e14);
        system("cls");

        // c s
        if (e14 == 1)
        {
        	Title();
            printf(" \n\n\t\t\t\tChioce your cloud storage : \n\n\n\t\t\t\t 1. GOOGLE Drive \n\n\n\t\t\t\t 2. ONE Drive \n\n\n\t\t\t\t 3. Amezon Drive \n\n\n\t\t\t\t 4. Nextcloud \n ");
            scanf("%d", &e15);

            // g
            if (e15 == 1)
            {
                system(" explorer https://workspace.google.com/intl/en_in/products/drive/?utm_source=google&utm_medium=cpc&utm_campaign=1009153-Workspace-APAC-IN-en-BKWS-EXA-Golden&utm_content=text-ad-none-none-DEV_c-CRE_469259700132-ADGP_Hybrid%20%7C%20AW%20SEM%20%7C%20BKWS%20~%20EXA%20%7C%20Drive%20%7C%20%5BM:1%5D%20%7C%20IN%20%7C%20EN-KWID_43700057535047347-kwd-2833008900&userloc_1007759-network_g&utm_term=KW_google%20drive&gclid=CjwKCAiA-f78BRBbEiwATKRRBA1DLhKKY92Q8kS8xT0y6EDi2jBek_pwoelrFy19TT6zafHvXHyVxxoCm7gQAvD_BwE&gclsrc=aw.ds");
            }

            // one
            else if (e15 == 2)
            {
                system("explorer https://www.microsoft.com/en-in/microsoft-365/business/compare-all-microsoft-365-business-products-b?&ef_id=CjwKCAiA-f78BRBbEiwATKRRBMeiHwD03EylipmLfT19_rHbkJREUK4xno9JgD4dBFcEIgtzI7vTJRoCPVcQAvD_BwE:G:s&OCID=AID2100137_SEM_CjwKCAiA-f78BRBbEiwATKRRBMeiHwD03EylipmLfT19_rHbkJREUK4xno9JgD4dBFcEIgtzI7vTJRoCPVcQAvD_BwE:G:s&lnkd=Google_O365SMB_App&gclid=CjwKCAiA-f78BRBbEiwATKRRBMeiHwD03EylipmLfT19_rHbkJREUK4xno9JgD4dBFcEIgtzI7vTJRoCPVcQAvD_BwE");
            }

            // g
            else if (e15 == 3)
            {
                system("explorer https://play.google.com/store/apps/details?id=com.amazon.drive&hl=en_IN&gl=US");
            }

            // amezon
            else if(e15==4)
            {
                system("explorer  https://www.intechdc.com/cloud-vps.html?gclid=CjwKCAiA-f78BRBbEiwATKRRBLMrfnXC8F8F4UUo-3qEWVimSG7ywiQViJ1_aM8G7C_SxsDwGtFtMRoCvNsQAvD_BwE ");
            }
            else
        	{
          	 	nvinput(); 
        	}
            getch();
        }

        // pen di
        else if (e14 == 2)
        {
        	Title();
        	
            printf("\n\n\t Chioce your cloud storage : \n\n\t\t\t\t 1.  SanDisk SDDDC4-032G-I35 512 GB  n\n\t\t\t\t 2. Pankreeti PKT552 Captain America Cartoon Designer 256 GB \n\n\t\t\t\t 3. HP V22OW 64 GB \n\n\t\t\t\t 4. SanDisk Type C OTG 3.1 Dual Drive 256 GB OTG Drive");
            printf ("\n\tEnter your Choice No : ");
			scanf("%d", &e16);

            // sad
            if (e16 == 1)
            {
                system(" explorer  https://www.flipkart.com/sandisk-sdddc4-032g-i35-512-gb-otg-drive/p/itm5d8786a439234");
            }

            // pan
            else if (e16 == 2)
            {
                system(" explorer  https://www.amazon.in/Pankreeti-Captain-America-Designer-Multicolor/dp/B07MNQH3FC ");
            }

            // hp
            else if (e16 == 3)
            {
                system(" explorer   https://www.flipkart.com/hp-v220w-64-gb-pen-drive/p/itmf3qy9bybzbn6r ");
            }

            // sad 264
            else if (e16==4)
            {
                system(" explorer  https://www.amazon.in/SanDisk-Ultra-SDDDC2-256G-G46-Drives-Silver/dp/B06XC1WGQR ");
            }
            else
       		{
           		nvinput(); 
       		}
            getch();
        }

        // hard di
        else
        {
        	Title();
        	
            printf("\n\n\tChioce your Hard disk : \n\n\t\t\t\t (1) Samsung T7 1 TB External Solid State Drive \n\n\t\t\t\t (2)  WD My Passport 4 TB External \n\n\t\t\t\t (3) SanDisk 1 TB Wired External Solid State Drive   \n\n\t\t\t\t (4) Western Digital HDD WD10EZEX 1TB SATA \n\n\t\t\t\t (5) Sony 480 GB Wired External Solid State Drive ");
            printf ("\n\tEnter your Choice No : ");
			scanf("%d", e17);

            // sam
            if (e17 == 1)
            {
                system(" explorer https://www.flipkart.com/samsung-t7-touch-1-tb-external-solid-state-drive/p/itm67072d8069bdc ");
            }

            // wd
            else if (e17 == 2)
            {
                system(" explorer https://www.amazon.in/Western-Digital-External-Drive-WDBBGB0040HBK-BESN/dp/B01NBQPWF9/ref=sr_1_1_sspa?adgrpid=61670805529&dchild=1&ext_vrnc=hi&gclid=CjwKCAiA-f78BRBbEiwATKRRBOiYMYiOBDKUnJzF-Je9NfwBeWAPhkAgCaJyrJAW64WKLFJH1VmnmRoCsTQQAvD_BwE&hvadid=398037955389&hvdev=c&hvlocphy=1007759&hvnetw=g&hvqmt=b&hvrand=18110261541201667500&hvtargid=kwd-295434944790&hydadcr=21893_1981215&keywords=my+book+wd&qid=1604344158&sr=8-1-spons&tag=googinhydr1-21&psc=1&spLa=ZW5jcnlwdGVkUXVhbGlmaWVyPUEyMFNGRFVLQk9OVkdUJmVuY3J5cHRlZElkPUEwNzA0ODIzWU00UkMwUUY3VDhXJmVuY3J5cHRlZEFkSWQ9QTA0MjgxMjEyTkNaUlRPOUc3V1hSJndpZGdldE5hbWU9c3BfYXRmJmFjdGlvbj1jbGlja1JlZGlyZWN0JmRvTm90TG9nQ2xpY2s9dHJ1ZQ==  ");
            }

            // sandisk
            else if (e17 == 3)
            {
                system(" explorer  https://www.flipkart.com/sandisk-500-gb-external-solid-state-drive/p/itmfh7exnchjza6p?pid=ACCFH7EXNK6H9SAS&lid=LSTACCFH7EXNK6H9SASHGCSQB&marketplace=FLIPKART&srno=b_1_1&otracker=browse&fm=organic&iid=b1f68fff-7876-4f0f-a2a5-1c07e5f1bc74.ACCFH7EXNK6H9SAS.SEARCH&ssid=h3sby1h1tc0000001604344204243 ");
            }

            // Western Digital HDD WD10EZEX 1TB SATA
            else if (e17 == 4)
            {
                system(" explorer  https://www.amazon.in/Western-Digital-WD10EZEX-Internal-Desktop/dp/B0088PUEPK ");
            }

            // sony
            else if (e17==5)
            {
                system(" explorer https://www.flipkart.com/sony-480-gb-wired-external-solid-state-drive/p/itmfcwvahfpfzhhp  ");
            }
            else
       		{
         	  nvinput(); 
       		}
            getch();
        }
        getch();
    }

    //power bank

    else if (e1 == 3)
    {
    	Title();
    	
        printf(" Chioces your Device : \n (1) Syska 20000 mAh  \n (2) realme 10000 mAh  \n (3) Ironman Helmet - 6000 mAh\n (4) Philips 20000 Mah\n (5) Samsung Battery Pack 10000 Mah  \n ");
        printf ("\n\tEnter your Choice No : ");
		scanf("%d", &e18);

        // Syska 20000 mAh
        if (e18 == 1)
        {
            system(" explorer https://www.amazon.in/Syska-10000-Li-Polymer-P1015B-Core100/dp/B07PLG5S5T/ref=redir_mobile_desktop?ie=UTF8&aaxitk=GN.n1kZOuBeQItV0FbTxuQ&hsa_cr_id=3338261360402&ref_=sbx_be_s_sparkle_mcd_asin_0	 ");
        }

        // realme
        else if (e18 == 2)
        {
            system(" explorer https://www.flipkart.com/realme-10000-mah-power-bank-fast-charging-18-w/p/itm7c72f5775838f 	 ");
        }

        // ironman
        else if (e18 == 3)
        {
            system(" explorer  https://www.amazon.in/Ironman-Helmet-6000-Limited-Powerbank/dp/B07PYRHBY7	 ");
        }

        // philips
        else if (e18 == 4)
        {
            system(" explorer  https://www.flipkart.com/philips-20000-mah-power-bank-fast-charging-10-w/p/itm749ebf60c040f	 ");
        }

        // samsung
        else if (e18==5)
        {
            system(" explorer https://www.flipkart.com/samsung-10000-mah-power-bank/p/itmf2bwncpaactfn " );
         }
         else 
        {
           nvinput(); 
        }
        getch();
    }

    // samrt assistant

    else if (e1 == 4)
    {
    	Title();
    	
        printf("\n\n\t\t\t\t Chioces your Smart assistant : \nt\t\t\t (1) Google Home  \n\t\t\t\t(2) Apple HomePod  \nt\t\t\t (3)  Amazon Echo (2nd Gen)\n\t\t\t\t (4) Google Nest Hub \nt\t\t\t (5) Lenovo Smart Display 7 (with Google Assistant)  \n ");
        printf ("\n\tEnter your Choice No : ");
		scanf("%d", &e19);

        // google home
        if (e18 == 1)
        {
            system(" explorer  https://www.flipkart.com/google-home/p/itmf3xz9aa6n6urf?gclid=CjwKCAiA-f78BRBbEiwATKRRBJhfuusqp_COgmasUSvXiKx5A7Gmnt8x4qEvHh4AnG3KAoiWPNPcWhoCHFsQAvD_BwE&pid=ATNF3HF8RHDVTBHM&lid=LSTATNF3HF8RHDVTBHMFGZJX2&marketplace=FLIPKART&cmpid=content_smart-assistant_1402265007_g_8965229628_gmc_pla&tgi=sem,1,G,11214002,g,search,,472213542895,,,,c,,,,,,,&ef_id=CjwKCAiA-f78BRBbEiwATKRRBJhfuusqp_COgmasUSvXiKx5A7Gmnt8x4qEvHh4AnG3KAoiWPNPcWhoCHFsQAvD_BwE:G:s&s_kwcid=AL!739!3!472213542895!!!g!931368136696!&gclsrc=aw.ds	 ");
        }

        // Apple HomePod
        else if (e18 == 2)
        {
            system(" explorer https://www.apple.com/in/homepod/?afid=p238%7CsCXhzkMIg-dc_mtid_20925q7l66466_pcrid_472702130575_pgrid_109251096697_&cid=wwa-in-kwgo-aes-slid---productid--Brand-homepod-Announce-	 ");
        }

        // amezon alexa
        else if (e18 == 3)
        {
            system(" explorer  https://www.amazon.in/Amazon-Echo-Smart-speaker-Powered/dp/B0714JKG4Y	 ");
        }

        // goole
        else if (e18 == 4)
        {
            system(" explorer  https://www.amazon.in/dp/B0714JKG4Y?ext_vrnc=hi&tag=googinkenshoo-21&ascsubtag=_k_CjwKCAiA-f78BRBbEiwATKRRBLeutWyNuxM0EXyrgjlRMYgkgCXmYtQibFzieef87grcHImM-6tpWBoCOUEQAvD_BwE_k_&gclid=CjwKCAiA-f78BRBbEiwATKRRBLeutWyNuxM0EXyrgjlRMYgkgCXmYtQibFzieef87grcHImM-6tpWBoCOUEQAvD_BwE	 ");
        }

        // lenovo
        else if ( e18==5)
        {
        	system (" explorer https://www.lenovo.com/in/en/tablets/virtual-reality-and-smart-devices/smart-home/Lenovo-CD-17302/p/ZZISZSDCD02");
        }
        else 
        {
           nvinput(); 
        }
        
        getch();
    }

    // mobile accessories

    else if (e1 == 5)
    {
    	Title();
    	
        printf("\n\n\t Chioces your mobile acceseories : \n\n\t\t\t\t 1. Chhrger type-c \n\n\t\t\t\t 2. Chhrger type-USB  \n\n\t\t\t\t 3. Screen guand \n\n\t\t\t\t 4. cover \n\n\t\t\t\t 5. Tripod \n\n\t\t\t\t 6. Triggers \n\n\n\t\t\t\t 7. Selfie stick \n ");
        printf ("\n\tEnter your Choice No : ");
		scanf("%d", &e19);

        // ch t-c
        if (e19 == 1)
        {
            system(" explorer https://www.flipkart.com/q/type-c-charger ");
        }

        //  ch t-ubc
        else if (e19 == 2)
        {
            system(" explorer  https://www.flipkart.com/syska-wc-2a-wc-2a-bk-10-w-2-mobile-charger-detachable-cable/p/itm579d22e7afa83?pid=ACCF7MR6BDZQSM5Z&lid=LSTACCF7MR6BDZQSM5ZO4U7Z7&marketplace=FLIPKART&srno=b_1_6&otracker=browse&fm=organic&iid=cc1902be-9ba6-483b-b2b7-c679a67bd686.ACCF7MR6BDZQSM5Z.SEARCH&ssid=c1nbpitnog0000001604376460131	 ");
        }

        // screen g
        else if (e19 == 3)
        {
            system(" explorer https://screenguards.co.in/ 	 ");
        }

        // cover
        else if (e18 == 4)
        {
            system(" explorer https://www.flipkart.com/mobile-accessories/cases-and-covers/pr?sid=tyy,4mr,q2u	 ");
        }

        // Tirpod
        else if (e19 == 5)
        {
            system(" explore  https://www.flipkart.com/camera-accessories/tripods/pr?sid=jek%2C6l2%2Cce6 ");
        }

        // selfie
        else if (e19==6)
        {
            system(" explore   https://www.amazon.in/dp/B084JC8744/ref=sspa_dk_detail_1?psc=1&pd_rd_i=B084JC8744&pd_rd_w=ZlYHF&pf_rd_p=1801b34c-8af9-42b5-8961-11f124edc99b&pd_rd_wg=ZSvJc&pf_rd_r=02X06CEH0A73R43D5S4Z&pd_rd_r=01c29342-695f-40d7-bd42-3f9ff9989229&spLa=ZW5jcnlwdGVkUXVhbGlmaWVyPUExNU5HUVVMVzBQM0RCJmVuY3J5cHRlZElkPUEwMzQ0NTE4MjFGVERHN0hJRVg4VyZlbmNyeXB0ZWRBZElkPUEwMjA5MTkxMk8xWFFEUFdOVk1ITiZ3aWRnZXROYW1lPXNwX2RldGFpbCZhY3Rpb249Y2xpY2tSZWRpcmVjdCZkb05vdExvZ0NsaWNrPXRydWU= ");
        }
        else 
        {
           nvinput(); 
        }
        getch();
    }

    // leptop accessories

    else
    {
    	Title();
    	
        printf(" \n\n\tChioces your mobile acceseories : \n\n\t\t\t\t 1. Deepcool MUlti Core X6 \n\n\t\t\t\t 2. keybord protector \n\n\t\t\t\t 3. Leptop Cover \n\n\t\t\t\t 4. Screen guand \n\n\t\t\t\t 5. FWQPRA® T8 Table for Laptop Stand  \n\n\t\t\t\t 6. Solo IC- 106 Twin Clean (Screen Cleaner) \n\n\t\t\t\t 7. Realme Tech Backpack  \n ");
        printf ("\n\tEnter your Choice No : ");
		scanf("%d", &e20);

        // deep
        if (e20 == 1)
        {
            system(" explorer https://www.flipkart.com/deepcool-multi-core-x6/p/itmdgqrfdghjanjy ");
        }

        // keyboard
        else if (e20 == 2)
        {
            system(" explorer   https://www.amazon.in/Saco-Quality-Silicone-Keyboard-Protector/dp/B07DC156LW/ref=sr_1_1_sspa?adgrpid=61839078474&dchild=1&ext_vrnc=hi&gclid=CjwKCAiA-f78BRBbEiwATKRRBFnqfduj4Js01wO_IlyBwjrK8Beopuh3jgo5u3vvquim2qtGklIcRhoCTCYQAvD_BwE&hvadid=474999836788&hvdev=c&hvlocphy=1007759&hvnetw=g&hvqmt=e&hvrand=13893888260190451593&hvtargid=kwd-271234332&hydadcr=24565_2124880&keywords=keyboard+protector&qid=1604376172&sr=8-1-spons&tag=googinhydr1-21&psc=1&spLa=ZW5jcnlwdGVkUXVhbGlmaWVyPUExQ1BKS1lBOEExSFBZJmVuY3J5cHRlZElkPUEwMTA1NDE2SU9YVkhPQ0NWWUtEJmVuY3J5cHRlZEFkSWQ9QTAwMjQwMzAzQ1ZTRlIxRFY2NUtOJndpZGdldE5hbWU9c3BfYXRmJmFjdGlvbj1jbGlja1JlZGlyZWN0JmRvTm90TG9nQ2xpY2s9dHJ1ZQ==");
        }
        // leptop cov
        else if (e20 == 3)
        {
            system(" explorer https://www.macmerise.com/shop/generic-15-6-inch-laptops-34-8-cm-x-24-1-cm/macmerise-skins/the-dark-side?utm_source=gsa&utm_medium=cpc&utm_campaign=all_products_smart_shopping&gclid=CjwKCAiA-f78BRBbEiwATKRRBO9Vt5yaLuzIUUqj-yFspctLoFHBGtl7e8N0vzn03nwbdW-MTkkC8RoC964QAvD_BwE ");
        }

        // screen g
        else if (e20 == 4)
        {
            system(" explorer https://www.amazon.in/Saco-Protector-Pavilion-11-ad105tu-11-6-inch/dp/B07PKNBNCM/ref=sr_1_2_sspa?dchild=1&keywords=screen+guard+laptop&qid=1604467861&s=electronics&sr=1-2-spons&psc=1&spLa=ZW5jcnlwdGVkUXVhbGlmaWVyPUFQTDZUQ1cwM0wzVFUmZW5jcnlwdGVkSWQ9QTAyNjY5NjRESDdHUDFJRFZQREomZW5jcnlwdGVkQWRJZD1BMDE3OTg3MjNVTDJRVVBHUDhCQVkmd2lkZ2V0TmFtZT1zcF9hdGYmYWN0aW9uPWNsaWNrUmVkaXJlY3QmZG9Ob3RMb2dDbGljaz10cnVl");
        }

        // fwq
        else if (e20 == 5)
        {
            system(" explorer https://www.amazon.in/T8-Portable-Adjustable-Ergonomics-Aluminum/dp/B07FBJMZM6 ");
        }

        // solo
        else if (e20 == 6)
        {
            system(" explorer https://www.flipkart.com/solo-ic-106-computers/p/itmdv4568c3czvx4");
        }

        // realme tech bag
        else if (e20==7)
        {
            system(" explorer https://www.realme.com/in/realme-techbackpack/specs");
        }
        else 
        {
           nvinput(); 
        }
        getch();
    }
    getch();
}

void welcome()
{
		printf("\n\n\n\n\n\n\n\n\t\t\t\t############################################################");
		printf("\n\t\t\t\t##\t\t\t WEL-COME \t\t\t  ##\t\t\t ");
		printf("\n\t\t\t\t##\t  \t\t    TO     \t\t\t  ##");
		printf("\n\t\t\t\t## \t\t   MY SHOPPING WEDSITE  \t\t  ##");
		printf("\n\t\t\t\t############################################################");
		printf("\n\n\n\t\a Press any Key ...");
		getch();
		system("cls");
}
void Title()
{
	printf("\n -----------------------------------------------------------------------------------------------------------------------");
	printf("\n\n\t\t\t\t MY SHOPPING WEDSITE");
	printf("\n\n -----------------------------------------------------------------------------------------------------------------------");
}

void outside()
{
	printf(" \n\n\n\n\n\n\t\t\t\a Thanks for Visiting ' MY SHOPPING WEDSITE ' :) \n\n\n\n\n\n\t\t\t\t\t ");
}
void nvinput()
{
	printf("\n\n\n\n\t\t# ***  Invalid input, please enter right input : ...");
}

