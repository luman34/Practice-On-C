#include <head.h>

struct ZACH *write1(void)
{
	static struct ZACH Z1 =
	{
		"����",
		"������",
		"����������",
		"2���1337",
		{
			{ 2017, //�������� �������
			  1,//1� �������
				{ //������
					//{ "", "", "..", { notDiff, {.acc = 1} }  },
					{ "�������� � �������������", "��������", "22.12.17", { notDiff, {.acc = 1} }  },
					{ "������� ������", "�����", "27.12.17", { notDiff, {.acc = 1} }  },
					{ "������� ���� � �������� ����", "���������", "09.01.18", { notDiff, {.acc = 1} }  },
					{ "���������� ����", "���������", "10.01.18", { notDiff, {.acc = 1} }  },
					{ "�����������", "�����������", "11.01.18", { notDiff, {.acc = 1} }  }
				},
				{ //��������
					//{ "", "", "..", { Diff, {.mark =  } }  },
					{ "������ ����������", "��������", "19.01.18", { Diff, {.mark = Good } }  },
					{ "������������� ��������� � �������� �������", "��������", "23.01.18", { Diff, {.mark = Excel} }  },
					{ "���������", "����������", "30.01.18", { Diff, {.mark = Excel} }  }
				}
			},
			{ 2018,
			  2,
				{
					{ "������������� ���������� � ���������", "��������", "31.05.18", { notDiff, {.acc = 1} }  },
					{ "������", "������", "01.06.18", { notDiff, {.acc = 1} }  },
					{ "���������� ��������", "���������", "08.06.18", { notDiff, {.acc = 1} }  },
					{ "������������� ������ ���������", "���������", "12.06.18", { notDiff, {.acc = 1} }  },
					{ "������������ �������", "���������", "12.06.18", { notDiff, {.acc = 1} }  }
				},
				{
					{ "�������", "���������", "18.06.18", { Diff, {.mark = Excel} }  },
					{ "������ ����������", "��������", "21.06.18", { Diff, {.mark = Excel} }  },
					{ "�����������", "������", "25.06.18", { Diff, {.mark = Excel} }  },
					{ "����������� ����", "�����������", "02.07.18", { Diff, {.mark = Good} }  }
				}
			},
			{ 2018,
			  3,
				{
					{ "��������", "���������", "26.12.18", { notDiff, {.acc = 1} }  },
					{ "�������������� �������������� �������� ������ �������", "�����", "31.12.18", { notDiff, {.acc = 1} }  },
					{ "������ ������������� ����� �������� ������", "���������", "09.01.19", { Diff,{.mark = Good} }  },
					{ "������ ������������� �����", "���������", "09.01.19", { notDiff, {.acc = 1} }  },
					{ "������ ������� ������������ �����������", "��������", "08.01.19", { notDiff, {.acc = 1} }  },
					{ "���������� ������ �����������", "������", "10.01.19", { notDiff, {.acc = 1} }  }
				},
				{
					{ "���������� ����������", "��������", "15.01.19", { Diff, {.mark = Excel} }  },
					{ "������", "������", "22.01.19", { Diff, {.mark = Excel} }  },
					{ "�������������� ������", "�����", "31.12.18", { Diff, {.mark = Excel} }  },
					{ "������ ����������� � �������������� ����������", "��������", "66.66.66", { Diff, {.mark = Excel} }  }
				}
			},
			{ 2019,
			  4,
				{
					{ "������ ��������� ���������", "RAP_GOD", "$1.33.7$", { notDiff, {.acc = 1} }  },
					{ "��������", "������", "12.12.12", { notDiff, {.acc = 1} }  },
					{ "�������������� ������ �������� ������", "�����������", "12.03.19", { Diff, {.mark = Excel} }  },
					{ "�������������� �������� ������ ���������������� �����", "����������", "12.04.19", { notDiff, {.acc = 1} }  },
					{ "���������������� ���� � �����", "����������", "12.04.19", { notDiff, {.acc = 1} }  },
					{ "���������� ��������", "����������", "00.07.19", { notDiff, {.acc = 1} }  },
					{ "�������������� ������", "�����������", "12.03.19", { notDiff, {.acc = 1} }  },
					{ "���������� ������������ �������", "������", "������", { notDiff, {.acc = 1} }  }//����������
				},
				{
					{ "�����������", "������", "19.06.19", { Diff, {.mark = Excel} }  },
					{ "������ ������������� �����", "����������", "20.06.19", { Diff, {.mark = Excel} }  },
					{ "����� ������ �����", "������", "21.06.19", { Diff, {.mark = Excel} }  },
					{ "������������ �������������������� ���������", "�����", "�����", { Diff, {.mark = Excel} }  }
				}
			},
		}
	 };
	return &Z1;
}
struct ZACH *write2(void)
{
	static struct ZACH Z2;
	strcpy(Z2.firstName, "����");
	strcpy(Z2.lastName, "������");
	strcpy(Z2.dadName, "����������");
	strcpy(Z2.number, "2���1337");

	//1� �������
	Z2.semI[0].sem = 1;
	Z2.semI[0].year = 2017;

	strcpy(Z2.semI[0].theor[0].name, "�������� � �������������");
	strcpy(Z2.semI[0].theor[0].teach, "��������");
	strcpy(Z2.semI[0].theor[0].time, "22.12.17");
	Z2.semI[0].theor[0].str.type = notDiff;
	Z2.semI[0].theor[0].str.value.acc = 1;

	strcpy(Z2.semI[0].theor[1].name, "������� ������");
	strcpy(Z2.semI[0].theor[1].teach, "�����");
	strcpy(Z2.semI[0].theor[1].time, "27.12.17");
	Z2.semI[0].theor[1].str.type = notDiff;
	Z2.semI[0].theor[1].str.value.acc = 1;

	strcpy(Z2.semI[0].theor[2].name, "������� ���� � �������� ����");
	strcpy(Z2.semI[0].theor[2].teach, "���������");
	strcpy(Z2.semI[0].theor[2].time, "09.01.18");
	Z2.semI[0].theor[2].str.type = notDiff;
	Z2.semI[0].theor[2].str.value.acc = 1;

	strcpy(Z2.semI[0].theor[3].name, "���������� ����");
	strcpy(Z2.semI[0].theor[3].teach, "���������");
	strcpy(Z2.semI[0].theor[3].time, "10.01.18");
	Z2.semI[0].theor[3].str.type = notDiff;
	Z2.semI[0].theor[3].str.value.acc = 1;

	strcpy(Z2.semI[0].theor[4].name, "�����������");
	strcpy(Z2.semI[0].theor[4].teach, "�����������");
	strcpy(Z2.semI[0].theor[4].time, "11.01.18");
	Z2.semI[0].theor[4].str.type = notDiff;
	Z2.semI[0].theor[4].str.value.acc = 1;


	strcpy(Z2.semI[0].prack[0].name, "������ ����������");
	strcpy(Z2.semI[0].prack[0].teach, "��������");
	strcpy(Z2.semI[0].prack[0].time, "19.01.18");
	Z2.semI[0].prack[0].str.type = Diff;
	Z2.semI[0].prack[0].str.value.mark = Good;

	strcpy(Z2.semI[0].prack[1].name, "������������� ��������� � �������� �������");
	strcpy(Z2.semI[0].prack[1].teach, "��������");
	strcpy(Z2.semI[0].prack[1].time, "23.01.18");
	Z2.semI[0].prack[1].str.type = Diff;
	Z2.semI[0].prack[1].str.value.mark = Excel;

	strcpy(Z2.semI[0].prack[2].name, "���������");
	strcpy(Z2.semI[0].prack[2].teach, "����������");
	strcpy(Z2.semI[0].prack[2].time, "30.01.18");
	Z2.semI[0].prack[2].str.type = Diff;
	Z2.semI[0].prack[2].str.value.mark = Excel;

	//2� �������
	Z2.semI[1].sem = 2;
	Z2.semI[1].year = 2018;

	strcpy(Z2.semI[1].theor[0].name, "������������� ���������� � ���������");
	strcpy(Z2.semI[1].theor[0].teach, "��������");
	strcpy(Z2.semI[1].theor[0].time, "31.05.18");
	Z2.semI[1].theor[0].str.type = notDiff;
	Z2.semI[1].theor[0].str.value.acc = 1;

	strcpy(Z2.semI[1].theor[1].name, "������");
	strcpy(Z2.semI[1].theor[1].teach, "������");
	strcpy(Z2.semI[1].theor[1].time, "01.06.18");
	Z2.semI[1].theor[1].str.type = notDiff;
	Z2.semI[1].theor[1].str.value.acc = 1;

	strcpy(Z2.semI[1].theor[2].name, "���������� ��������");
	strcpy(Z2.semI[1].theor[2].teach, "���������");
	strcpy(Z2.semI[1].theor[2].time, "08.06.18");
	Z2.semI[1].theor[2].str.type = notDiff;
	Z2.semI[1].theor[2].str.value.acc = 1;

	strcpy(Z2.semI[1].theor[3].name, "������������� ������ ���������");
	strcpy(Z2.semI[1].theor[3].teach, "���������");
	strcpy(Z2.semI[1].theor[3].time, "12.06.18");
	Z2.semI[1].theor[3].str.type = notDiff;
	Z2.semI[1].theor[3].str.value.acc = 1;

	strcpy(Z2.semI[1].theor[4].name, "������������ �������");
	strcpy(Z2.semI[1].theor[4].teach, "���������");
	strcpy(Z2.semI[1].theor[4].time, "12.06.18");
	Z2.semI[1].theor[4].str.type = notDiff;
	Z2.semI[1].theor[4].str.value.acc = 1;


	strcpy(Z2.semI[1].prack[0].name, "�������");
	strcpy(Z2.semI[1].prack[0].teach, "���������");
	strcpy(Z2.semI[1].prack[0].time, "18.06.18");
	Z2.semI[1].prack[0].str.type = Diff;
	Z2.semI[1].prack[0].str.value.mark = Excel;

	strcpy(Z2.semI[1].prack[1].name, "������ ����������");
	strcpy(Z2.semI[1].prack[1].teach, "��������");
	strcpy(Z2.semI[1].prack[1].time, "21.06.18");
	Z2.semI[1].prack[1].str.type = Diff;
	Z2.semI[1].prack[1].str.value.mark = Excel;

	strcpy(Z2.semI[1].prack[2].name, "�����������");
	strcpy(Z2.semI[1].prack[2].teach, "������");
	strcpy(Z2.semI[1].prack[2].time, "25.06.18");
	Z2.semI[1].prack[2].str.type = Diff;
	Z2.semI[1].prack[2].str.value.mark = Excel;

	strcpy(Z2.semI[1].prack[3].name, "����������� ����");
	strcpy(Z2.semI[1].prack[3].teach, "�����������");
	strcpy(Z2.semI[1].prack[3].time, "02.07.18");
	Z2.semI[1].prack[3].str.type = Diff;
	Z2.semI[1].prack[3].str.value.mark = Good;

	//3� �������
	Z2.semI[2].sem = 3;
	Z2.semI[2].year = 2018;

	strcpy(Z2.semI[2].theor[0].name, "��������");
	strcpy(Z2.semI[2].theor[0].teach, "���������");
	strcpy(Z2.semI[2].theor[0].time, "26.12.18");
	Z2.semI[2].theor[0].str.type = notDiff;
	Z2.semI[2].theor[0].str.value.acc = 1;

	strcpy(Z2.semI[2].theor[1].name, "�������������� �������������� �������� ������ �������");
	strcpy(Z2.semI[2].theor[1].teach, "�����");
	strcpy(Z2.semI[2].theor[1].time, "31.12.18");
	Z2.semI[2].theor[1].str.type = notDiff;
	Z2.semI[2].theor[1].str.value.acc = 1;

	strcpy(Z2.semI[2].theor[2].name, "������ ������������� ����� �������� ������");
	strcpy(Z2.semI[2].theor[2].teach, "���������");
	strcpy(Z2.semI[2].theor[2].time, "09.01.19");
	Z2.semI[2].theor[2].str.type = Diff;
	Z2.semI[2].theor[2].str.value.mark = Good;

	strcpy(Z2.semI[2].theor[3].name, "������ ������������� �����");
	strcpy(Z2.semI[2].theor[3].teach, "���������");
	strcpy(Z2.semI[2].theor[3].time, "09.01.19");
	Z2.semI[2].theor[3].str.type = notDiff;
	Z2.semI[2].theor[3].str.value.acc = 1;

	strcpy(Z2.semI[2].theor[4].name, "������ ������� ������������ �����������");
	strcpy(Z2.semI[2].theor[4].teach, "��������");
	strcpy(Z2.semI[2].theor[4].time, "08.01.19");
	Z2.semI[2].theor[4].str.type = notDiff;
	Z2.semI[2].theor[4].str.value.acc = 1;

	strcpy(Z2.semI[2].theor[5].name, "���������� ������ �����������");
	strcpy(Z2.semI[2].theor[5].teach, "������");
	strcpy(Z2.semI[2].theor[5].time, "10.01.19");
	Z2.semI[2].theor[5].str.type = notDiff;
	Z2.semI[2].theor[5].str.value.acc = 1;


	strcpy(Z2.semI[2].prack[0].name, "���������� ����������");
	strcpy(Z2.semI[2].prack[0].teach, "��������");
	strcpy(Z2.semI[2].prack[0].time, "15.01.19");
	Z2.semI[2].prack[0].str.type = Diff;
	Z2.semI[2].prack[0].str.value.mark = Excel;

	strcpy(Z2.semI[2].prack[1].name, "������");
	strcpy(Z2.semI[2].prack[1].teach, "������");
	strcpy(Z2.semI[2].prack[1].time, "22.01.19");
	Z2.semI[2].prack[1].str.type = Diff;
	Z2.semI[2].prack[1].str.value.mark = Excel;

	strcpy(Z2.semI[2].prack[2].name, "�������������� ������");
	strcpy(Z2.semI[2].prack[2].teach, "�����");
	strcpy(Z2.semI[2].prack[2].time, "31.12.18");
	Z2.semI[2].prack[2].str.type = Diff;
	Z2.semI[2].prack[2].str.value.mark = Excel;

	strcpy(Z2.semI[2].prack[3].name, "������ ����������� � �������������� ����������");
	strcpy(Z2.semI[2].prack[3].teach, "��������");
	strcpy(Z2.semI[2].prack[3].time, "66.66.66");
	Z2.semI[2].prack[3].str.type = Diff;
	Z2.semI[2].prack[3].str.value.mark = Excel;

	//4� �������
	Z2.semI[3].sem = 4;
	Z2.semI[3].year = 2019;

	strcpy(Z2.semI[3].theor[0].name, "������ ��������� ���������");
	strcpy(Z2.semI[3].theor[0].teach, "RAP_GOD");
	strcpy(Z2.semI[3].theor[0].time, "$1.33.7$");
	Z2.semI[3].theor[0].str.type = notDiff;
	Z2.semI[3].theor[0].str.value.acc = 1;

	strcpy(Z2.semI[3].theor[1].name, "��������");
	strcpy(Z2.semI[3].theor[1].teach, "������");
	strcpy(Z2.semI[3].theor[1].time, "12.12.12");
	Z2.semI[3].theor[1].str.type = notDiff;
	Z2.semI[3].theor[1].str.value.acc = 1;

	strcpy(Z2.semI[3].theor[2].name, "�������������� ������ �������� ������");
	strcpy(Z2.semI[3].theor[2].teach, "�����������");
	strcpy(Z2.semI[3].theor[2].time, "12.03.19");
	Z2.semI[3].theor[2].str.type = Diff;
	Z2.semI[3].theor[2].str.value.mark = Excel;

	strcpy(Z2.semI[3].theor[3].name, "�������������� �������� ������ ���������������� �����");
	strcpy(Z2.semI[3].theor[3].teach, "����������");
	strcpy(Z2.semI[3].theor[3].time, "12.04.19");
	Z2.semI[3].theor[3].str.type = notDiff;
	Z2.semI[3].theor[3].str.value.acc = 1;

	strcpy(Z2.semI[3].theor[4].name, "���������������� ���� � �����");
	strcpy(Z2.semI[3].theor[4].teach, "����������");
	strcpy(Z2.semI[3].theor[4].time, "12.04.19");
	Z2.semI[3].theor[4].str.type = notDiff;
	Z2.semI[3].theor[4].str.value.acc = 1;

	strcpy(Z2.semI[3].theor[5].name, "���������� ��������");
	strcpy(Z2.semI[3].theor[5].teach, "����������");
	strcpy(Z2.semI[3].theor[5].time, "00.07.19");
	Z2.semI[3].theor[5].str.type = notDiff;
	Z2.semI[3].theor[5].str.value.acc = 1;

	strcpy(Z2.semI[3].theor[5].name, "�������������� ������");
	strcpy(Z2.semI[3].theor[5].teach, "�����������");
	strcpy(Z2.semI[3].theor[5].time, "12.03.19");
	Z2.semI[3].theor[5].str.type = notDiff;
	Z2.semI[3].theor[5].str.value.acc = 1;

	strcpy(Z2.semI[3].theor[5].name, "���������� ������������ �������");
	strcpy(Z2.semI[3].theor[5].teach, "������");
	strcpy(Z2.semI[3].theor[5].time, "������");//����������
	Z2.semI[3].theor[5].str.type = notDiff;
	Z2.semI[3].theor[5].str.value.acc = 1;


	strcpy(Z2.semI[3].prack[0].name, "�����������");
	strcpy(Z2.semI[3].prack[0].teach, "������");
	strcpy(Z2.semI[3].prack[0].time, "19.06.19");
	Z2.semI[3].prack[0].str.type = Diff;
	Z2.semI[3].prack[0].str.value.mark = Excel;

	strcpy(Z2.semI[3].prack[1].name, "������ ������������� �����");
	strcpy(Z2.semI[3].prack[1].teach, "����������");
	strcpy(Z2.semI[3].prack[1].time, "20.06.19");
	Z2.semI[3].prack[1].str.type = Diff;
	Z2.semI[3].prack[1].str.value.mark = Excel;

	strcpy(Z2.semI[3].prack[2].name, "����� ������ �����");
	strcpy(Z2.semI[3].prack[2].teach, "������");
	strcpy(Z2.semI[3].prack[2].time, "21.06.19");
	Z2.semI[3].prack[2].str.type = Diff;
	Z2.semI[3].prack[2].str.value.mark = Excel;

	strcpy(Z2.semI[3].prack[3].name, "������������ �������������������� ���������");
	strcpy(Z2.semI[3].prack[3].teach, "�����");
	strcpy(Z2.semI[3].prack[3].time, "�����");
	Z2.semI[3].prack[3].str.type = Diff;
	Z2.semI[3].prack[3].str.value.mark = Excel;

	return &Z2;
}

void strocher(struct ZACH *Z, int n)
{
	if (*Z->semI[n].prack[0].name)
	{
        printf("���������� ������������� ���������� (��������):\n\n%-65s %-10s %-10s %-60s\n\n","������������ ����������","������","����","������� �������������");
	    for (int i = 0 ; *Z->semI[n].prack[i].name ; i++)
	    {
		    printf("%-65s %-10d %-10s %-60s\n", Z->semI[n].prack[i].name, Z->semI[n].prack[i].str.value.mark, Z->semI[n].prack[i].time, Z->semI[n].prack[i].teach);
	    }
	}
	else
	{
		printf("������ �� ��������� �����������\n");
	}
	printf("\n");
	if (*Z->semI[n].theor[0].name)
	{
		printf("���������� ������������� ���������� (������):\n\n%-65s %-10s %-10s %-60s\n\n", "������������ ����������", "������", "����", "������� �������������");
		for (int i = 0; *Z->semI[n].theor[i].name; i++)
		{
			if (Z->semI[n].theor[i].str.type == notDiff)
			{
				printf("%-65s %-10s %-10s %-60s\n", Z->semI[n].theor[i].name, Z->semI[n].theor[i].str.value.acc ? "�������" : "�� �������", Z->semI[n].theor[i].time, Z->semI[n].theor[i].teach);
			}
			else
			{
				printf("%-65s %-10d %-10s %-60s\n", Z->semI[n].theor[i].name, Z->semI[n].theor[i].str.value.mark, Z->semI[n].theor[i].time, Z->semI[n].theor[i].teach);
			}
		}
	}
	else
	{
		printf("������ � ������� �����������\n");
	}
}
void menu(struct ZACH *Z)
{
	do
	{
		printf("����� �������� ������: %s\n��� ��������: %s %s %s\n", Z->number, Z->lastName, Z->firstName, Z->dadName);
		printf("2. �������� �������:\n1 - ������� �1\n2 - ������� �2\n3 - ������� �3\n4 - ������� �4\n5 - ��� ��������\n6 - � ����\n");
		switch (_getch())
		{
		case'1':
			system("cls");
			printf("������� 1:\n\n");
			strocher(Z, 0);
			break;
		case'2':
			system("cls");
			printf("������� 2:\n\n");
			strocher(Z, 1);
			break;
		case'3':
			system("cls");
			printf("������� 3:\n\n");
			strocher(Z, 2);
			break;
		case'4':
			system("cls");
			printf("������� 4:\n\n");
			strocher(Z, 3);
			break;
		case'5':
			system("cls");
			printf("������� 1:\n\n");
			strocher(Z, 0);
			printf("--------------------------------------------------------------------------------------------------------------------------------\n");
			printf("������� 2:\n\n");
			strocher(Z, 1);
			printf("--------------------------------------------------------------------------------------------------------------------------------\n");
			printf("������� 3:\n\n");
			strocher(Z, 2);
			printf("--------------------------------------------------------------------------------------------------------------------------------\n");
			printf("������� 4:\n\n");
			strocher(Z, 3);
			printf("--------------------------------------------------------------------------------------------------------------------------------\n");
			break;
		case'6':
			return;
		}
		system("pause");
		system("cls");
	} while (1);
}
void main(void)
{
	setlocale(LC_ALL, "Rus");
	struct ZACH *Z1 = write1();
	struct ZACH *Z2 = write2();
	do
	{
		printf("1. �������� �������:\n1 - ������� 1\n2 - ������� 2\n3 - �����\n");
		switch (_getch())
		{
		case '1':
			system("cls");
			printf("������ ������ �������.\n");
			menu(Z1);
			break;
		case '2':
			system("cls");
			printf("������ ������ �������.\n");
			menu(Z2);
			break;
		case '3':
			exit(0);
		}
		system("pause");
		system("cls");
	} while (1);
}